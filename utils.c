/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:41:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/08 03:59:23 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *array, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (array[i - 1] > array[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_sorted(int *stack, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (stack[i - 1] < stack[i])
			return (0);
		i++;
	}
	return (1);
}

void	sort_two(t_data *arg, int i)
{
	if (i == 2)
	{
		if (arg->stack_a[0] > arg->stack_a[1])
			sa(arg);
	}
	else
		return ;
}

void	sort_three_help(t_data *arg)
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

void	sort_five(t_data *arg, int *stack, int i)
{
	int	j;
	int	b;

	b = 0;
	if (is_sorted(stack, i))
		return ;
	if (!get_pivot(arg, stack, i))
		return ;
	j = i / 2;
	while (j != 0)
	{
		if (stack[0] < arg->pivot && j--)
		{
			if (b == 2)
				break ;
			if (stack[0] < arg->stack_b[0] && arg->b_len != 0)
				(pb(arg), sb(arg));
			else
				pb(arg);
			b++;
		}
		else
			ra(arg);
	}
	(sort_three(arg, arg->a_len), pa(arg), pa(arg));
}
