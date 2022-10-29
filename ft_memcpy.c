/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:24:20 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/29 10:27:20 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *di, const void *si, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)di;
	s = (unsigned char *)si;
	if (di == 0 && si == 0)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (di);
}
