/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 02:44:38 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/03/03 12:37:59 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	count_words(char *s, char c)
{
	size_t	i;
	int		cnt;

	i = 0;
	cnt = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

static char	*ft_strndup(char *s1, int n)
{
	int		i;
	char	*new;

	if (!s1)
		return (NULL);
	i = 0;
	new = (char *)malloc(n + 1);
	if (!new)
		return (NULL);
	while (i < n)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

static char	**free2d(char **arr, int index)
{
	int	i;

	i = 0;
	while (index - i >= 0)
	{
		free(arr[index - i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		index;
	int		tail_matrice;
	char	**arr;

	tail_matrice = count_words(s, c);
	index = -1;
	arr = (char **)malloc(sizeof(char *) * (tail_matrice + 1));
	if (!(arr))
		return (NULL);
	while (++index < tail_matrice)
	{
		i = 0;
		while (*s && *s == c)
			s++;
		while (*(s + i) != c && *(s + i))
			i++;
		arr[index] = ft_strndup(s, i);
		if (arr[index] == NULL)
			return (free2d(arr, index));
		while (*s && *s != c)
			s++;
	}
	arr[index] = NULL;
	return (arr);
}
