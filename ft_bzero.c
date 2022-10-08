/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:56:57 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/01 12:57:17 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_bzero(void *bater , size_t n)
{
	size_t	i;
	i = 0;
	unsigned char *b;
	b = (unsigned char*)bater;
	while (i < n)
	{
		b[i] = '0';
		i++;
	}
	return (bater);
}
