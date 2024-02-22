/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:30:43 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/20 23:16:32 by ael-fagr         ###   ########.fr       */
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
            arg.str = ft_split(av[i], ' ');
            if (!arg.str || !arg.str[0])
                return (ft_putstr_fd("Error\n", 1), 1);
            arg.tab = ft_joinstr(arg.tab, arg.str);
            i++;
        }
        j = 0;
        ft_parcing(&arg);
        arg.stack_b[0] = 4;
        arg.stack_b[1] = 3;
        arg.stack_b[2] = 2;
        arg.stack_b[3] = 1;
        arg.stack_b[4] = 0;
        ft_putstr_fd("*******stack_a befor********\n", 1);
        while (j < arg.t_len)
            printf("%d\n",arg.stack_a[j++]);
        ft_putstr_fd("*******(pa pb)********\n", 1);
        rra(&arg);
        rra(&arg);
        ft_putstr_fd("*******stack_a after********\n", 1);
        j = 0;
        while (j < arg.t_len)
            printf("%d\n",arg.stack_a[j++]);
    }
    return (0);
}
