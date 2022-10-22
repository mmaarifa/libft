/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:39:15 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:20:39 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *di, const char *si, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (si[i])
		i++;
	while (j < n && si[j])
	{
		di[j] = si[j];
		j++;
	}
	di[j] = '\0';
	return (i);
}
