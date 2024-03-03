/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_param.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:52:13 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/03 15:28:06 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void    set_param(t_data *arg)
{
	arg->i = 0;
	arg->j = 0;
	arg->a_len = 0;
	arg->b_len = 0;
	arg->tab = NULL;
	arg->inst = NULL;
	arg->str = NULL;
}
