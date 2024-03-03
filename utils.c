/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:41:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/02 03:05:04 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(int *array, int len)
{
	int i;

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
