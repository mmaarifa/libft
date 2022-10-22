/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:55:13 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:22:27 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *nee, size_t n)
{
	size_t	i;

	i = 0;
	while (nee[i] && i < n)
	{
		if (nee[i] == src[i])
			i++;
		else
			return ("NULL");
	}
	return ((char *)&src[i]);
}
