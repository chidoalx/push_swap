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
            if (!arg.str[0])
                return (ft_putstr_fd("Error\n", 1), 1);
            arg.tab = ft_joinstr(arg.tab, arg.str);
            i++;
        }
        j = 0;
        ft_parcing(&arg);
        while (j < arg.t_len)
            printf("%d\n",arg.stack_a[j++]);
        ft_putstr_fd("*******(pa)stack_a********\n", 1);
        pa(&arg);
        pa(&arg);
        pa(&arg);
        j = 0;
        while (j < arg.t_len + 1)
            printf("%d\n",arg.stack_a[j++]);
        j = 0;
        while (j < arg.t_len + 1)
            printf("**%d**\n",arg.stack_b[j++]);
    }
    return (0);
}
