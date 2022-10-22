/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:08:31 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:10:44 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	long	s;
	char	*src;

	s = n * (n > 0) - n * (n < 0);
	i = 0 + 1 * (n < 0);
	while (n && ++i)
		n = n / 10;
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
