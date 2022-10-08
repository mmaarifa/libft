/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:30:39 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/07 20:31:21 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_memset(void *b, int c,size_t len)
{
	size_t i;

	i = 0;
	unsigned char *di;
	di = (unsigned char*)b;
	while(i < len)
	{
		di[i] = c;
		i++;
	}
	return(b);
}
void	*ft_calloc(size_t count, size_t n)
{

	void *p;
	p = malloc(count*n);
	p = ft_memset(p,0,count*n);
 return (p);
}
