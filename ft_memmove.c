/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:18:40 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/05 17:19:25 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memmove(void *di, const void *si, size_t n)
{
	size_t i;

	i = 0;
	unsigned char *d;
	unsigned char *s;
	d = (unsigned char*)di;
	s = (unsigned char*)si;
	if (d > s)
	{
		while (n > 0)
		{
			d[n-1] = s[n-1];
			n--;
		}
	}
	else
		while (i < n)
		{
			d[i]=s[i];
			i++;
		}
	return (di);
}
