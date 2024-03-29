/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:07:10 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/06 03:51:30 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_push(t_data *arg, int len, int f)

{
	if (f == 0)
		pa(arg);
	else if (f == 1)
		pb(arg);
	len--;
	return (len);
}

void	sort_three(t_data *arg, int len)
{
	if (len == 3 && arg->a_len == 3)
		sort_three_help(arg);
	else if (len == 2)
	{
		if (arg->stack_a[0] > arg->stack_a[1])
			sa(arg);
	}
	else
	{
		while (len != 3 || !is_sorted(arg->stack_a, len))
		{
			if (len == 3 && arg->stack_a[0] > arg->stack_a[1])
				sa(arg);
			else if (len == 3 && !(arg->stack_a[2] > arg->stack_a[0]
					&& arg->stack_a[2] > arg->stack_a[1]))
				len = check_push(arg, len, 1);
			else if (arg->stack_a[0] > arg->stack_a[1])
				sa(arg);
			else if (len++)
				pa(arg);
		}
	}
}

int	sort_three_b(t_data *arg, int len)
{
	if (len == 1)
		pa(arg);
	else if (len == 2)
	{
		if (arg->stack_b[0] < arg->stack_b[1])
			sb(arg);
		while (len--)
			pa(arg);
	}
	else if (len == 3)
	{
		while (len != 0)
		{
			if (len == 1 && arg->stack_a[0] > arg->stack_a[1])
				sa(arg);
			else if (len == 1
				|| (len >= 2 && arg->stack_b[0] > arg->stack_b[1])
				|| (len == 3 && arg->stack_b[0] > arg->stack_b[2]))
				len = check_push(arg, len, 0);
			else
				sb(arg);
		}
	}
	return (0);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble_sort(int arr[], int n)
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
