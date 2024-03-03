/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:34:37 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/02 03:34:26 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_data
{
	char    **tab;
	char    *str;
	int     i;
	int     j;
	int     a_len;
	int     b_len;
	int		min;
	int		max;
	int		mid;
	int		flag;
	int		pivot;
	int     *stack_a;
	int     *stack_b;
	int		*cp_tab;
}       t_data;


size_t	ft_strlen(char *str);
char	**ft_split(char *s, char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int	    ft_atoi(char *str);
void    set_param(t_data *arg);
int     ft_parcing(t_data *arg);
char	*ft_strjoin(char *s1, char *s2);
void    ft_convert_str(t_data *arg);
int    cheack_repeat_nb(t_data *arg);
void 	ft_strcpy(char *dst, char *src);
void    sorting(t_data *arg);
void    sort_two(t_data *arg, int *stack, int i);
void    sort_three(t_data *arg, int *stack);
int     is_sorted(int *array, int len);
int		check_sorted(int *stack, int dim);
int 	sort_a(t_data *arg, int len, int count);
void    sa(t_data *arg);
void    pb(t_data *arg);
void    sb(t_data *arg);
void    pa(t_data *arg);
void    ra(t_data *arg);
void    rb(t_data *arg);
void    rr(t_data *arg);
void    ss(t_data *arg);
void    rra(t_data *arg);
void    rrb(t_data *arg);
void    rrr(t_data *arg);
#endif