/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:13:00 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/06 02:13:58 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_data *arg)
{
	int	r;

	if (arg->b_len > 1)
	{
		r = arg->stack_b[0];
		arg->stack_b[0] = arg->stack_b[1];
		arg->stack_b[1] = r;
		printf("sb\n");
	}
}

void	pb(t_data *arg)
{
	int	r;
	int	j;

	j = 0;
	if (arg->a_len != 0)
	{
		r = arg->stack_a[0];
		while (j < arg->a_len - 1)
		{
			arg->stack_a[j] = arg->stack_a[j + 1];
			j++;
		}
		j = arg->b_len;
		while (j > 0)
		{
			arg->stack_b[j] = arg->stack_b[j - 1];
			j--;
		}
		arg->stack_b[0] = r;
		printf("pb\n");
		arg->b_len++;
		arg->a_len--;
	}
}

void	rb(t_data *arg)
{
	int	r;
	int	j;

	j = 0;
	if (arg->b_len > 1)
	{
		r = arg->stack_b[0];
		while (j < arg->b_len - 1)
		{
			arg->stack_b[j] = arg->stack_b[j + 1];
			j++;
		}
		arg->stack_b[j] = r;
		printf("rb\n");
	}
}

void	rr(t_data *arg)
{
	ra(arg);
	rb(arg);
	printf("rr\n");
}

void	rrb(t_data *arg)
{
	int	r;
	int	i;

	if (arg->b_len > 1)
	{
		i = arg->b_len - 1;
		r = arg->stack_b[arg->b_len - 1];
		while (i > 0)
		{
			arg->stack_b[i] = arg->stack_b[i - 1];
			i--;
		}
		arg->stack_b[0] = r;
		printf("rrb\n");
	}
}
