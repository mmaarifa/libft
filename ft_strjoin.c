/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:51:13 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:19:36 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*f;

	f = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (f == NULL)
		return (f);
	i = 0;
	j = 0;
	while (s1[i])
	{
		f[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		f[i] = s2[j];
		i++;
		j++;
	}
	f[i] = '\0';
	return (f);
}
