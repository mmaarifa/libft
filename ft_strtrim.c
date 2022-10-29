/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:58:01 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/29 05:59:41 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*k;
	int		i;
	int		len;
	int		j;

	if (!s1 || !set)
		return (0);
	i = 0;
	k = (char *)s1;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = 0;
	while (s1[0] && s1[--len] && ft_strchr(set, s1[len]))
		j++;
	k = ft_substr(s1, i, ft_strlen(s1) - i - j);
	if (!k)
		return (0);
	return (k);
}
/*
#include <stdio.h>
int main()
{
printf("%s",ft_strtrim("", ""));
return 0;
}
*/
