/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:41:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/26 18:58:19 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int pos (t_data *arg)
// {
// 	int i;
// 	i = 0;
// 	while (i < arg->a_len)
// 	{
// 		if (arg->stack_a[i] == find_smallest(arg, arg->stack_a))
// 			break;
// 		i++;
// 	}
// 	return i;
// }
//if i ft_lstsize(stack) / 2
//if > rra
//else ra
int find_smallest(t_data *arg, int *stack)
{
	int smallest;
	int i;

	i = 1;
	smallest = stack[0];
	while (i < arg->a_len)
	{
		if (stack[i] < smallest)
			smallest = stack[i];
		i++;
	}
	return (smallest);
}

int find_longest(t_data *arg, int *stack)
{
	int longest;
	int i;

	i = 1;
	longest = stack[0];
	while (i < arg->a_len)
	{
		if (stack[i] > longest)
			longest = stack[i];
		i++;
	}
	return (longest);
}

int is_sorted(int *array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (array[i] > array[i + 1])
			return 0;
		i++;
	}
	return 1;
}

void    sort_three(t_data *arg)
{
	if (arg->stack_a[0] > arg->stack_a[1]
		&& arg->stack_a[0] < arg->stack_a[2])
		sa(arg);
	else if (arg->stack_a[0] > arg->stack_a[1]
		&& arg->stack_a[0] > arg->stack_a[2])
	{
		if (arg->stack_a[0] > arg->stack_a[1]
			&& arg->stack_a[1] > arg->stack_a[2])
			(sa(arg), rra(arg));
		else if (arg->stack_a[0] > arg->stack_a[1]
			&& arg->stack_a[1] < arg->stack_a[2])
			ra(arg);
	}
	else if (arg->stack_a[0] < arg->stack_a[1]
		&& arg->stack_a[0] < arg->stack_a[2])
	{
		if (arg->stack_a[1] > arg->stack_a[2])
			(rra(arg), sa(arg));
	}
	else if (arg->stack_a[0] < arg->stack_a[1]
		&& arg->stack_a[0] > arg->stack_a[2])
		rra(arg);
}

void    sort_five(t_data *arg)
{
	if (!is_sorted(arg->stack_a, arg->a_len))
	{
		while (arg->stack_a[0] != find_smallest(arg, arg->stack_a))
			ra(arg);
		pb(arg);
		while (arg->stack_a[0] != find_smallest(arg, arg->stack_a))
			ra(arg);
		pb(arg);
		sort_three(arg);
		pa(arg);
		pa(arg);
		if (arg->stack_a[0] > arg->stack_a[1])
			sa(arg);
	}
}