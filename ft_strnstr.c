/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:55:13 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/29 12:15:29 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strnstr(const char *src, const char *nee, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	b;

	if (src == NULL && n == 0)
		return (0);
	if (*nee == 0)
		return ((char *)&src[0]);
	b = ft_strlen(nee);
	i = 0;
	while (src[i] && i < n)
	{
		j = 0;
		while (i + j < n && src[i + j] == nee[j] && nee[j])
				j++;
		if (j == b)
			return ((char *)&src[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n",ft_strnstr("haystack","needle",-1));
	printf("orgen : %s",strnstr("ahaystack","aneedle",-1));
	return 0;
}*/
