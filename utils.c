/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:41:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/06 02:15:32 by ael-fagr         ###   ########.fr       */
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

int	check_sorted(int *stack, int dim)
{
	int	i;

	i = 1;
	while (i < dim)
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
