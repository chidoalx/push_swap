/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:30:43 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/15 15:41:34 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_param(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '\0')
		(ft_putstr_fd("Error\n", 1), exit(1));
}

int	main(int ac, char **av)
{
	t_data	arg;
	int		i;

	i = 1;
	if (ac >= 2)
	{
		set_param(&arg);
		while (av[i])
		{
			if (av[i][0] == '\0')
				return (ft_putstr_fd("Error\n", 1), 1);
			ft_check_param(av[i]);
			arg.str = ft_strjoin(arg.str, av[i]);
			arg.str = ft_strjoin(arg.str, " ");
			if (!arg.str)
				return (ft_putstr_fd("Error\n", 1), free(arg.str), 1);
			i++;
		}
		arg.tab = ft_split(arg.str, ' ');
		if (!arg.tab)
			return (ft_putstr_fd("Error\n", 1), ft_free(arg.tab), 1);
		ft_parcing(&arg);
		sorting(&arg);
	}
	return (0);
}
