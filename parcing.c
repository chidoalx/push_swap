/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:39:03 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/15 15:22:00 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_convert_str(t_data *arg)
{
	int	i;

	i = 0;
	while (arg->tab[i])
		i++;
	arg->a_len = i;
	arg->stack_a = (int *)malloc(sizeof(int) * i);
	if (arg->stack_a == NULL)
		(free (arg->stack_a), exit(1));
	arg->stack_b = (int *)malloc(sizeof(int) * i);
	if (arg->stack_b == NULL)
		(free (arg->stack_b), exit(1));
	i = 0;
	while (arg->tab[i])
	{
		arg->stack_a[i] = ft_atoi(arg->tab[i]);
		i++;
	}
	return (0);
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
			{
				(free(arg->stack_a), free(arg->stack_b));
				return (ft_putstr_fd("Error\n", 1), 1);
			}
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
