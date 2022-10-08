/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:01:50 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/04 20:18:03 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memchr(const char *s, int c, size_t n)
{
	size_t  i;

	char *si;
	si = (char*)s;
	i = 0;
	while (i < n)
	{
		if (si[i] == c)
			return ((char*)&si[i]);
		i++;
	}
	return ("NULL");
}