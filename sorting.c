/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 03:57:40 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/28 17:43:25 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_data *arg, int a)
{
	int i;
	int	index;

	i = 0;
	index = 0;
	while (i < arg->a_len)
	{
		if (a == arg->stack_a[i])
		{
			index = i;
			break ;
		}
		i++;
	}
	return (index);
}
/*void	finalsort(t_stack **a, t_stack **b)
{
	int	biggindex;

	biggindex = ft_lstlast(*a)->index;
	while (ft_lstsize(*b) != 0)
	{
		if ((*b)->index == ((*a)->index - 1))
			pa(a, b);
		else if (ft_lstlast(*b)->index == ((*a)->index - 1))
			(rrb(b), pa(a, b));
		else if (ft_lstlast(*a)->index == biggindex)
			(pa(a, b), ra(a));
		else if (ft_lstlast(*a)->index < (*b)->index)
			(pa(a, b), ra(a));
		else if (ft_lstlast(*a)->index < ft_lstlast(*b)->index)
			(rrb(b), pa(a, b), ra(a));
		else if (ft_lstlast(*a)->index == ((*a)->index - 1))
			rra(a);
		else if (checkp(*b, ((*a)->index - 1)) == 1)
			rb(b);
		else
			rrb(b);
	}
	while (ft_lstlast(*a)->index != biggindex)
		rra(a);
}*/

// void last_sort(t_dat *arg)
// {
// 	while (arg->b_len)
// }
void	sort_stack(t_data *arg)
{
	int s1;
	int s2;

	s2 = 0;
	while (arg->a_len > 3)
	{
		s1 = (arg->a_len / 6) + s2;
		s2 = (arg->a_len / 3) + s2;
		while (arg->a_len != 0 && s2 > arg->b_len)
		{
			if (get_index(arg, arg->stack_a[0]) < s2)
			{
				pb(arg);
				if (get_index(arg, arg->stack_b[0]) < s1
					&& arg->b_len > 1)
					rb(arg);
			}
			else
				ra(arg);
		}
	}
	if (!is_sorted(arg->stack_a, arg->a_len))
		sort_three(arg, arg->stack_a);
}
// void	sort_stack(t_data *arg)
// {
// 	int smallest;

// 	while (arg->a_len != 0)
// 	{
// 		smallest = find_smallest(arg, arg->stack_a);
// 		if (arg->stack_a[0] == smallest)
// 			pb(arg);
// 		else if (arg->a_len / 2 > get_index(arg, smallest))
// 			ra(arg);
// 		else
// 			rra(arg);
// 		arg->rang += 20;
// 	}
// 	while (arg->b_len != 0)
// 		pa(arg);
// }

void sorting(t_data *arg)
{
	if (arg->a_len <= 2)
		sort_two(arg, arg->stack_a, arg->a_len);
	else if (arg->a_len <= 3)
		sort_three(arg, arg->stack_a);
	else if (arg->a_len <= 5)
		sort_five(arg, arg->stack_a, arg->a_len);
	else
		sort_stack(arg);
}


