/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:24:20 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/05 13:25:47 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memcpy(void *di, void *si, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *d;
	unsigned char *s;
	d = (unsigned char*) di;
	s = (unsigned char*) si;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (di);
}
