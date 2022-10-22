/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:38:46 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:23:36 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;
	char	*f;

	i = 0;
	d = malloc(len + 1);
	if (d == NULL)
		return (d);
	f = malloc(1);
	if (f == NULL)
		return (f);
	f[0] = '\0';
	if (d == 0)
		return (0);
	if (start > ft_strlen(s))
		return (f);
	while (i < len && s[start])
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}
