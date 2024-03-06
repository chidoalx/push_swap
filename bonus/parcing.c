/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:39:03 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/06 02:28:37 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_convert_str(t_data *arg)
{
	int	i;

	i = 0;
	while (arg->tab[i])
		i++;
	arg->a_len = i;
	arg->stack_a = (int *)malloc(sizeof(int) * i);
	arg->stack_b = (int *)malloc(sizeof(int) * i);
	if (!arg->stack_a || !arg->stack_b)
		return ;
	i = 0;
	while (arg->tab[i])
	{
		arg->stack_a[i] = ft_atoi(arg->tab[i]);
		i++;
	}
}

int	cheack_repeat_nb(t_data *arg)
{
	int	i;
	int	j;

	i = 0;
	while (i < arg->a_len)
	{
		j = i + 1;
		while (j < arg->a_len)
		{
			if (arg->stack_a[i] == arg->stack_a[j])
				return (ft_putstr_fd("Error\n", 1), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_parcing(t_data *arg)
{
	ft_convert_str(arg);
	if (cheack_repeat_nb(arg) == 1)
		exit (1);
	return (0);
}
