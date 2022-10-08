/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:50:17 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/08 15:51:18 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int d;
	d  = (ft_strlen(s1) + 1);
	char *s;
	s = malloc (d);
	int i;

	i = 0;
	while (i < d)
	{
		s[i]= s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}


