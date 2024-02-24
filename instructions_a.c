/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:47:08 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/24 01:30:59 by ael-fagr         ###   ########.fr       */
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
    int j;

    j = 0;
    r = arg->stack_a[0];
    arg->a_len++;
    arg->b_len--;
    while (j < arg->a_len)
    {
        arg->stack_a[j] = arg->stack_a[j + 1];
        j++;
    }
    j = arg->a_len;
    while (j > 0)
    {
        arg->stack_b[j] = arg->stack_b[j - 1];
        j--;
    }
    arg->stack_b[0] = r;
}

void    ra(t_data *arg)
{
    int r;
    int j;

    j = 0;
    r = arg->stack_a[0];
    while (j < arg->a_len - 1)
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

void    rra(t_data *arg)
{
    int r;
    int i;

    i = arg->a_len;
    r = arg->stack_a[arg->a_len - 1];
    while (i > 0)
    {
        arg->stack_a[i] = arg->stack_a[i - 1];
        i--;
    }
    arg->stack_a[0] = r;
}
