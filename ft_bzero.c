/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:56:57 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/22 15:30:16 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *bater, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *) bater;
	i = 0;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
	return (bater);
}
