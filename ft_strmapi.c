/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:24:49 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/21 20:21:13 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*src;

	i = 0;
	src = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (src == NULL)
		return (NULL);
	while (s[i])
	{
		src[i] = f(i, s[i]);
		i++;
	}
	src[i] = '\0';
	return (src);
}
