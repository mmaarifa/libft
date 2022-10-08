/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:03:48 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/01 12:06:06 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *bater, int c, size_t n)
{
	size_t i;
	unsigned char *b;
	b = (unsigned char*)bater;
	i = 0;
	while(i < n)
	{
		b[i] = c;
		i++;
	}
	return (bater);
}
