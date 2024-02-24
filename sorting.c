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

void    sorting(t_data *arg)
{
    while (arg->a_len > 0)
    {
        while (arg->a_len > 0)
        {
            if (arg->a_len == 0)
                pb(arg);
            if (arg->a_len > 0)
            {
                if (arg->stack_a[j] > arg->stack_a[j + 1])
                    pb(arg);
                else
                    ra(arg);
            }
            j++;
        }
        i++;
    }
}