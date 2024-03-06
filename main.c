/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:30:43 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/06 02:42:09 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			arg.str = ft_strjoin(arg.str, av[i]);
			arg.str = ft_strjoin(arg.str, " ");
			if (!arg.str || !arg.str[0])
				return (ft_putstr_fd("Error\n", 1), free(arg.str), 1);
			i++;
		}
		arg.tab = ft_split(arg.str, ' ');
		if (!arg.tab)
			ft_free(arg.tab);
		ft_parcing(&arg);
		sorting(&arg);
	}
	return (0);
}
