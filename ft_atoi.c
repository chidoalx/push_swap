/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:01:02 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/19 12:41:37 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int		i;
	long	tmp;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	tmp = 0;
	result = 0;
	while (str[i] == 32)
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1] != '\0')
		sign = 44 - str[i++];
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		if ((result * sign > 2147483647 || result * sign < -2147483648)
			|| (str[i] < '0' || str[i] > '9'))
		{
			ft_putstr_fd("Error\n", 1);
			exit(1);
		}
		i++;
	}
	return ((result * sign));
}
