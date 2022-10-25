/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:01:50 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/24 13:15:23 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*si;

	si = (char *)s;
	i = 0;
	while (i < n)
	{
		if (si[i] == c)
			return ((char *)&si[i]);
		i++;
	}
	return (NULL);
}
