/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 03:57:40 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/02 04:34:13 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_data *arg, int a)
{
	int i;
	int	index;

	i = 0;
	index = -1;
	while (i < arg->a_len)
	{
		if (a >= arg->stack_a[i])
			index++;
		i++;
	}
	return (index);
}
/// 
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
//
int find_index(t_data *arg, int a)
{
	int i;
	int	index;

	i = 0;
	index = 0;
	bubbleSort(arg->cp_tab, arg->a_len);
	while (i < arg->a_len)
	{
		if (i == a)
			index = arg->cp_tab[i];
		i++;
	}
	return (index);
}

void sort_stack(t_data *arg)
{
    int i;

    if (!is_sorted(arg->stack_a, arg->a_len))
    {
		while(arg->a_len != 0)
		{
        	i = find_index(arg, arg->a_len / 2);
        	while (arg->a_len >= arg->a_len / 2)
        	{
            	if (arg->stack_a[0] < i)
                	pb(arg);
            	else if (arg->stack_a[arg->a_len - 1] < i)
                	rra(arg), pb(arg);
            	else
                	ra(arg);
        	}
		}
    }
}

void sorting(t_data *arg)
{
	if (arg->a_len <= 2)
		sort_two(arg, arg->stack_a, arg->a_len);
	else if (arg->a_len <= 3)
		sort_three(arg, arg->stack_a);
	else if(arg->a_len <= 5)
		sort_five(arg, arg->stack_a, arg->a_len);
	else
		sort_stack(arg);
}


