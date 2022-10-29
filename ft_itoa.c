/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:08:31 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/29 15:40:27 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*iff(int ni)
{
	char	*srce;

	if (ni > 0)
		ni = 0;
	srce = malloc(2);
	if (!srce)
		return (0);
		srce[0] = '0';
		srce[1] = '\0';
	return (srce);
}

char	*ft_itoa(int n)
{
	int		i;
	long	s;
	char	*src;
	long	j;

	j = n;
	if (j == 0)
		return (iff(0));
	s = j * (j > 0) - j * (j < 0);
	i = 0 + 1 * (j < 0);
	while (j && ++i)
		j = j / 10;
	src = malloc((i + 1) * sizeof(char));
	if (src == NULL)
		return (src);
	src[i] = '\0';
	src[0] = '-';
	while (s && --i >= 0)
	{
		src[i] = s % 10 + '0';
		s = s / 10;
	}
	return (src);
}
