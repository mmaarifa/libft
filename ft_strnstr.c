/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:55:13 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/25 21:57:35 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *nee, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	b;

	b = ft_strlen(nee);
	i = 0;
	while (src[i] && i < n)
	{
		j = 0;
		while (i + j < n && src[i] == nee[j] && nee[j])
		{
			if (src[i] == nee[j])
			{
				j++;
				i++;
			}
		}
		if (j == b)
			return ((char *)&src[i - j]);
		i++;
	}
	return (0);
}
