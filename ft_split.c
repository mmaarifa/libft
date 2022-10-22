/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:33:44 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:15:28 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordlen(const char *s, int c)
{
	int	i;
	int	b;

	b = 0;
	i = 0;
	if (s[0] != c)
		b = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			b++;
		i++;
	}
	return (b);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		d;
	int		l;
	int		k;
	char	**j;

	k = ft_wordlen(s, c) + 1;
	j = (char **)malloc(k * sizeof(char *));
	if (j == NULL)
		return (j);
	l = 0;
	i = 0;
	while (l < k)
	{
		while (s[i] && s[i] == c)
			i++;
		d = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			d++;
		}
		j[l] = ft_substr(s, (i - d), d);
		l++;
	}
	j[l] = (NULL);
	return (j);
}
