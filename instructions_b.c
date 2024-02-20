/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:13:00 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/20 22:21:19 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sb(t_data *arg)
{
    int r;

    r = arg->stack_b[0];
    arg->stack_b[0] = arg->stack_b[1];
    arg->stack_b[1] = r;
}

void    pb(t_data *arg)
{
    int r;
    int i;

    i = arg->t_len + 1;
    r = arg->stack_b[0];
    while (i >= 0)
    {
        arg->stack_a[i] = arg->stack_a[i - 1];
        if (i == 0)
            arg->stack_a[i] = r;
        i--;
    }
}

void    rb(t_data *arg)
{
    int r;
    int i;
    int j;

    j = 0;
    i = arg->t_len;
    r = arg->stack_b[0];
    while (j < i)
    {
        arg->stack_b[j] = arg->stack_b[j + 1];
        j++;
    }
    arg->stack_b[j] = r;
}

void    rr(t_data *arg)
{
    ra(arg);
    rb(arg);
}

// void    rrb(t_data *arg)
// {
    
// }