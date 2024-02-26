/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:30:43 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/26 17:07:20 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	t_data  arg;
	int     i;
	int     j;

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
				return (ft_putstr_fd("Error\n", 1), 1);
			i++;
		}
		arg.tab = ft_split(arg.str, ' ');
	}
	ft_parcing(&arg);
	j = 0;
	sorting(&arg);
	int k = find_smallest(&arg, arg.stack_a);
	printf ("smallest is (%d)\n", k);
	k = find_longest(&arg, arg.stack_a);
	printf ("longest is (%d)\n", k);
	printf ("+++++++++++stack a+++++++++\n");
	while (j < arg.a_len)
	    printf("%d\n", arg.stack_a[j++]);
	j = 0;
	printf ("+++++++++++stack b+++++++++\n");
	while (j < arg.b_len)
	    printf("%d\n", arg.stack_b[j++]);
	return (0);
}
