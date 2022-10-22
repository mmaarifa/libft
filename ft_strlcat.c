/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:14:08 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:20:16 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *di, const char *si, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	a;
	size_t	b;

	i = 0;
	j = 0;
	a = 0;
	b = 0;
	while (di[a])
		a++;
	while (si[b])
		b++;
	while (di[i])
		i++;
	while (si[j] && j < n)
	{
		di[i] = si[j];
		i++;
		j++;
	}
	di[i] = '\0';
	return (b + a);
}
