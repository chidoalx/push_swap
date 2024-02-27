/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:41:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/27 15:02:58 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (i < len-1)
	{
		if (array[i] > array[i + 1])
			return 0;
		i++;
	}
	return 1;
}
void    sort_two(t_data *arg, int *stack, int i)
{
	if (i == 2)
	{
		if (stack[0] > stack[1])
			sa(arg);
	}
	else
		return ;
}

void    sort_three(t_data *arg, int *stack)
{
	if (stack[0] > stack[1]
		&& stack[0] < stack[2])
		sa(arg);
	else if (stack[0] > stack[1]
		&& stack[0] > stack[2])
	{
		if (stack[0] > stack[1]
			&& stack[1] > stack[2])
			(sa(arg), rra(arg));
		else if (stack[0] > stack[1]
			&& stack[1] < stack[2])
			ra(arg);
	}
	else if (stack[0] < stack[1]
		&& stack[0] < stack[2])
	{
		if (stack[1] > stack[2])
			(rra(arg), sa(arg));
	}
	else if (stack[0] < stack[1]
		&& stack[0] > stack[2])
		rra(arg);
}

void    sort_five(t_data *arg, int *stack, int i)
{
	if (!is_sorted(stack, i))
	{
		while (stack[0] != find_smallest(arg, stack))
			ra(arg);
		pb(arg);
		while (stack[0] != find_smallest(arg, stack))
			ra(arg);
		pb(arg);
		sort_three(arg, stack);
		pa(arg);
		pa(arg);
		if (stack[0] > stack[1])
			sa(arg);
	}
}