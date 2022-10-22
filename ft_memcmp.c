/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:18:39 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:11:51 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*si1;
	unsigned char	*si2;
	size_t			i;

	i = 0;
	si1 = (unsigned char *)s1;
	si2 = (unsigned char *)s2;
	while (i < n - 1)
	{
		if (si1[i] - si2[i] != 0)
			break ;
		i++;
	}
	return (si1[i] - si2[i]);
}
