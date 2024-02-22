/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 03:38:09 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/02/19 09:57:46 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int ft_get_len(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    **ft_joinstr(char   **s1, char **s2)
{
  
	size_t	i;
	size_t	c;
	char	**str;

	if (!s1)
	{
		s1 = (char **)malloc(sizeof(char *));
		if (!s1)
			return (free(s2), NULL);
		s1[0] = NULL;
	}
	str = (char **)malloc(sizeof(char *) * (ft_get_len(s1) + ft_get_len(s2) + 2));
	if (!str)
		return (free(s1), free(s2), NULL);
	i = -1;
	c = 0;
	while (s1 && s1[++i])
    {
        str[i] = (char *)malloc((ft_strlen(str[i]) + 1));
		ft_strcpy(str[i], s1[i]);
    }
	while (s2 && s2[c])
    {
         str[i] = (char *)malloc((ft_strlen(str[c]) + 1));
		ft_strcpy(str[i++], s2[c++]);
    }
	str[i] = NULL;
	free(s1);
	free(s2);
	return (str);

}
/*
void ff(void)
{
	system("leaks a.out");
}

int main()
{
	char *s1 = "1 2 3 4 5";
	char *s2 = "6 7 8 9";
	char **str1 = ft_split(s1, ' ');
	char **str2 = ft_split(s2, ' ');
	char **pp = ft_joinstr(str1, str2);
	int i = 0;
	atexit(ff);
	while (pp[i])
	{
		printf("%s\n", pp[i]);
		i++;
	}
}
*/