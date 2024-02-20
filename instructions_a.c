/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:47:08 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/20 23:15:45 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_data *arg)
{
    int r;

    r = arg->stack_a[0];
    arg->stack_a[0] = arg->stack_a[1];
    arg->stack_a[1] = r;
}

void    pa(t_data *arg)
{
    int r;
    int sw;
    int i;
    int j;

    j = 0;
    i = arg->t_len + 1;
    r = arg->stack_a[0];
    while (j < i)
    {
        arg->stack_a[j] = arg->stack_a[j + 1];
        j++;
    }
    j = 0;
    sw = arg->stack_b[j];
    arg->stack_b[j++] = r;
    arg->stack_b[j++] = sw;
    while (j < i)
    {
        arg->stack_b[j] = arg->stack_b[j];
        j++;
    }
}

void    ra(t_data *arg)
{
    int r;
    int i;
    int j;

    j = 0;
    i = arg->t_len;
    r = arg->stack_a[0];
    while (j < i)
    {
        arg->stack_a[j] = arg->stack_a[j + 1];
        j++;
    }
    arg->stack_a[j] = r;
}

void    ss(t_data *arg)
{
    sa(arg);
    sb(arg);
}

// void    rra(t_data *arg)
// {
    
// }