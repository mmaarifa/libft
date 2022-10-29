/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:50:17 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/26 13:19:47 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		d;
	char	*s;
	int		i;

	d = ft_strlen(s1);
	s = malloc(d + 1);
	if (s == NULL)
		return (s);
	i = 0;
	while (i < d)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
