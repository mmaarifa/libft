/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:38:46 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/08 19:39:53 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;

	i = 0;
	char *d;
	d = malloc(len+1);

	//if (!d)
	//	return (0);
	while (i < len && s[start])
	{
		d[i]=s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}
