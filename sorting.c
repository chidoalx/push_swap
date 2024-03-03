/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 03:57:40 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/03 23:23:55 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
	int	i;
	int	j;

	i = 0;
    while (i < n - 1)
	{
		j = 0;
        while (j < n - i - 1)
		{
            if (arr[j] > arr[j + 1]) 
                swap(&arr[j], &arr[j + 1]);
			j++;
        }
		i++;
    }
}

int	get_pivot(t_data *arg, int *stack, int len)
{
	int	*tmp;
	int	i;
	int	j;

	tmp = (int *)malloc(sizeof(int) * len);
	if (!tmp)
		return (0);
	i = 0;
	j = 0;
	while (i < len)
		tmp[j++] = stack[i++];
	bubbleSort(tmp, len);
	arg->pivot = tmp[len / 2];
	free(tmp);
	return (1);
}

int	sort_b(t_data *arg, int len, int count)
{
	int number;

	number = len;
	if (check_sorted(arg->stack_b, len))
	{
		while (len--)
			pa(arg);
	}
	if (!get_pivot(arg, arg->stack_b, len))
		return (1);
	while (len != number / 2)
	{
		if (arg->stack_b[0] >= arg->pivot && len--)
				pa(arg);
		else
			(rb(arg), count++);
	}
	while (number / 2 != arg->b_len && count--)
		rrb(arg);
	return (sort_a(arg, (number / 2) + (number % 2), 0)
		&& sort_b(arg, number / 2, 0));
}

int sort_a(t_data *arg, int len, int count)
{
	int number;

	number = len;
	if (is_sorted(arg->stack_a, len))
		return(1);
	if (len <= 3)
	{
		sort_three(arg, arg->stack_a);
		return (1);
	}
	if (!get_pivot(arg, arg->stack_a, len))
		return (1);
	while (len != (number / 2) + number % 2)
	{
		if (arg->stack_a[0] < arg->pivot && len--)
			pb(arg);
		else
			(ra(arg), count++);
	}
	while (number / 2 + number % 2 != arg->a_len && count--)
		rra(arg);
	return (sort_a(arg, (number / 2) + (number % 2), 0)
		&& sort_b(arg, number / 2, 0));
}

void sorting(t_data *arg)
{
	if (arg->a_len <= 2)
		sort_two(arg, arg->stack_a, arg->a_len);
	else if (arg->a_len <= 3)
		sort_three(arg, arg->stack_a);
	else
		sort_a(arg, arg->a_len, 0);
}


