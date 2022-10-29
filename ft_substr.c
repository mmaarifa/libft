/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:38:46 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/29 06:01:12 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	i;
	char	*d;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (n > ft_strlen(s))
		n = ft_strlen (s) - start;
	d = malloc(n + 1);
	if (d == NULL)
		return (d);
	while (i < n && s[start] && *s)
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}
/*
#include <stdio.h>
int main ()
{
	char *str = "i just want this part #############";
 	size_t size = 10;
	printf("%s",ft_substr("hola", 4, 1));
	return 0;
}*/
