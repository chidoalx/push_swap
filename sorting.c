/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 03:57:40 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/25 21:24:03 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void selection_sort(t_data *arg)
// {
//     int i;
//     int smallest;
//     for (i = 0; i < arg->a_len; i++)
//     {
//         smallest = find_smallest(arg, arg->stack_a);
//         while (arg->stack_a[i] != smallest)
//             ra(arg);
//         pb(arg);
//     }

//     sort_three(arg);

//     while (arg->stack_a[0] != find_longest(arg, arg->stack_a))
//         ra(arg);
//     while (arg->a_len > 0)
//         pb(arg);
// }


void sorting(t_data *arg)
{
	if (arg->a_len <= 3)
		sort_three(arg);
	else if (arg->a_len <= 5)
		sort_five(arg);
}


