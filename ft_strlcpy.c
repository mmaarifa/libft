/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:39:15 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/22 17:21:07 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *di, const char *si, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (si[i])
		i++;
	if (n == 0)
		return (i);
	j = 0;
	while (j < n - 1 && si[j])
	{
		di[j] = si[j];
		j++;
	}
	di[j] = '\0';
	return (i);
}
