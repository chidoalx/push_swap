/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:41:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/21 21:39:25 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

static void	finish_actions(t_data *arg, int i)
{
	if (!ft_strncmp(arg->inst[i], "rr", 2))
		rr(arg);
	else if (!ft_strncmp(arg->inst[i], "sa", 2))
		sa(arg);
	else if (!ft_strncmp(arg->inst[i], "sb", 2))
		sb(arg);
	else if (!ft_strncmp(arg->inst[i], "ss", 2))
		ss(arg);
	else if (!ft_strncmp(arg->inst[i], "pa", 2))
		pa(arg);
	else if (!ft_strncmp(arg->inst[i], "pb", 2))
		pb(arg);
}

void	make_actions(t_data *arg)
{
	int	i;

	i = 0;
	while (i < arg->op)
	{
		if (!ft_strncmp(arg->inst[i], "rra", 3))
			rra(arg);
		else if (!ft_strncmp(arg->inst[i], "rrb", 3))
			rrb(arg);
		else if (!ft_strncmp(arg->inst[i], "rrr", 3))
			rrr(arg);
		else if (!ft_strncmp(arg->inst[i], "ra", 2))
			ra(arg);
		else if (!ft_strncmp(arg->inst[i], "rb", 2))
			rb(arg);
		else
			finish_actions(arg, i);
		i++;
	}
	ft_free(arg->inst);
}
