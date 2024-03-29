/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_handle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:39:04 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/21 21:48:04 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	check_valid_inst(char *p)
{
	if (!p)
		exit(1);
	if (ft_strncmp(p, "rra\n", 4) && ft_strncmp(p, "ra\n", 3)
		&& ft_strncmp(p, "rrb\n", 4) && ft_strncmp(p, "rb\n", 3)
		&& ft_strncmp(p, "sa\n", 3) && ft_strncmp(p, "sb\n", 3)
		&& ft_strncmp(p, "pa\n", 3) && ft_strncmp(p, "pb\n", 3)
		&& ft_strncmp(p, "ss\n", 3) && ft_strncmp(p, "rr\n", 3)
		&& ft_strncmp(p, "rrr\n", 4))
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}

void	operation_handle(t_data *arg)
{
	char	*p;

	while (1)
	{
		p = get_next_line(0);
		if (!p)
			break ;
		check_valid_inst(p);
		arg->str = ft_strjoin(arg->str, p);
		if (!arg->str || !arg->str[0])
			(ft_putstr_fd("Error\n", 2), free(arg->str), exit(1));
		free(p);
	}
	arg->inst = ft_split(arg, arg->str, '\n');
	if (!arg->inst)
		(ft_putstr_fd("Error\n", 2), ft_free(arg->inst), exit(1));
	make_actions(arg);
	if (is_sorted(arg->stack_a, arg->a_len) == 1 && arg->b_len == 0)
		(ft_putstr_fd("OK\n", 1), exit(1));
	else
		(ft_putstr_fd("KO\n", 1), exit(0));
}
