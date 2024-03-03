/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:34:37 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/03 21:41:44 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
#define PUSH_SWAP_BONUS_H

#include <libc.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 1486969768
# endif

typedef struct s_data
{
	char    **tab;
	char	**inst;
	char    *str;
	int     i;
	int     j;
	int     a_len;
	int     b_len;
	int     *stack_a;
	int     *stack_b;
}       t_data;


int		ft_strlen(char *str);
char	**ft_split(char *s, char c);
char	*get_next_line(int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int	    ft_atoi(char *str);
void    set_param(t_data *arg);
int     ft_parcing(t_data *arg);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void    ft_convert_str(t_data *arg);
int    cheack_repeat_nb(t_data *arg);
int     is_sorted(int *array, int len);
void	operation_handle(t_data *arg);
void	make_actions(t_data *arg);
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