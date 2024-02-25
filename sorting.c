/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 03:57:40 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/24 04:24:16 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_smallest(t_data *arg)
{
    int smallest;
    int i;

    i = 1;
    smallest = arg->stack_a[0];
    while (i < arg->a_len)
    {
        if (arg->stack_a[i] < smallest)
            smallest = arg->stack_a[i];
        i++;
    }
    return (smallest);
}

void    sort_three(t_data *arg)
{
    if (arg->stack_a[0] > arg->stack_a[1]
        && arg->stack_a[0] < arg->stack_a[2])
        sa(arg);
    else if (arg->stack_a[0] > arg->stack_a[1]
        && arg->stack_a[0] > arg->stack_a[2])
    {
        if (arg->stack_a[0] > arg->stack_a[1]
            && arg->stack_a[1] > arg->stack_a[2])
        {
            sa(arg);
            rra(arg);
        }
        else if (arg->stack_a[0] > arg->stack_a[1]
            && arg->stack_a[1] < arg->stack_a[2])
            ra(arg);
    }
    else if (arg->stack_a[0] < arg->stack_a[1]
        && arg->stack_a[0] < arg->stack_a[2])
    {
        if (arg->stack_a[1] > arg->stack_a[2])
        {
            rra(arg);
            sa(arg);
        }
    }
    else if (arg->stack_a[0] < arg->stack_a[1]
        && arg->stack_a[0] > arg->stack_a[2])
        rra(arg);
}

void    sort_five(t_data *arg)
{
	while (arg->stack_a[0] != find_smallest(arg))
		ra(arg);
	pb(arg);
	while (arg->stack_a[0] != find_smallest(arg))
		ra(arg);
	pb(arg);
	sort_three(arg);
	pa(arg);
	pa(arg);
	if (arg->stack_a[0] > arg->stack_a[1])
		sa(arg);
}

void sorting(t_data *arg)
{
    if (arg->a_len <= 3)
        sort_three(arg);
    else if (arg->a_len <= 5)
        sort_five(arg);
}
