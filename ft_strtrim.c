/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:58:01 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:23:16 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchrtr(const char *s, int c, size_t n)
{
	size_t	i;
	char	*si;

	si = (char *)s;
	i = 0;
	while (i < n)
	{
		if (si[i] != c)
			return ((char *)&si[i]);
		i++;
	}
	return (si);
}

char	*ft_memchrsr(char *c)
{
	size_t	i;
	size_t	g;
	char	*s;

	g = ft_strlen(c);
	i = 0;
	s = malloc(g + 1);
	if (s == NULL)
		return (s);
	while (g > 0)
	{
		s[i] = c[g - 1];
		i++;
		g--;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_aaa(char const *s1, char const *set)
{
	int		i;
	int		g;
	char	*f;

	g = ft_strlen(set);
	i = 0;
	f = ft_memchrtr(s1, set[i], ft_strlen(s1));
	while (g > 0)
	{
		while (set[i])
		{
			f = ft_memchrtr(f, set[i], ft_strlen(s1));
			i++;
		}
		i = 0;
		g--;
	}
	f = ft_memchrsr(f);
	return (f);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*f;

	f = ft_aaa(s1, set);
	j = ft_strlen(set);
	i = 0;
	while (j > 0)
	{
		while (set[i])
		{
			f = ft_memchrtr(f, set[i], ft_strlen(f));
			i++;
		}
		i = 0;
		j--;
	}
	f = ft_memchrsr(f);
	return (f);
}
