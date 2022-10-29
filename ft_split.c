/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:33:44 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/29 12:16:08 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_wordlen(const char *s, int c)
{
	int	i;
	int	b;

	b = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			b++;
		i++;
	}
	return (b);
}

static int	ft_substrlen(char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		l;
	char	**j;
	int		d;

	if (!s)
		return (0);
	j = malloc((ft_wordlen(s, c) + 1) * sizeof(char *));
	if (j == NULL)
		return (j);
	l = 0;
	i = 0;
	while (s[l])
	{
		while (s[l] && s[l] == c)
			l++;
		d = ft_substrlen((char *) &s[l], c);
		if (s[l])
			j[i++] = ft_substr(s, l, d);
		l += d;
	}
	j[i] = NULL;
	return (j);
}
/*
int	main(int ac, char **av)
{
	char	**tab;

	printf("word conter : %d\n", ft_wordlen(av[1], *av[2]));
	tab = ft_split(av[1], *av[2]);
//	while (*tab)
//		printf("%s\n", *(tab++));
	return (0);
}
*/
