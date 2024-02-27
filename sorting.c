/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 03:57:40 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/27 18:30:41 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_data *arg, int a)
{
	int i;
	int	index;

	i = 0;
	index = 0;
	while (i < arg->a_len)
	{
		if (a == arg->stack_a[i])
		{
			index = i;
			break ;
		}
		i++;
	}
	return (index);
}

void	sort_stack(t_data *arg)
{
	int smallest;

	while (arg->a_len != 0)
	{
		smallest = find_smallest(arg, arg->stack_a);
		if (arg->stack_a[0] == smallest)
			pb(arg);
		else if (arg->a_len / 2 > get_index(arg, smallest))
			ra(arg);
		else
			rra(arg);
	}
	while (arg->b_len != 0)
		pa(arg);
}

void sorting(t_data *arg)
{
	if (arg->a_len <= 2)
		sort_two(arg, arg->stack_a, arg->a_len);
	else if (arg->a_len <= 3)
		sort_three(arg, arg->stack_a);
	else if (arg->a_len <= 5)
		sort_five(arg, arg->stack_a, arg->a_len);
	else
	{
		if (arg->a_len <= 150)
			arg->rang = 8;
		else
			arg->rang = 18;
		sort_stack(arg);
	}
}


