/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:44:33 by mmaarifa          #+#    #+#             */
/*   Updated: 2022/10/26 12:37:58 by mmaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	bb;
	int	k;

	k = 1;
	bb = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		k = k * -1;
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		bb = bb * 10 + str[i] - '0';
		i++;
	}
	if (k == -1)
		return (bb * -1);
	else
		return (bb);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	printf("%d\n",ft_atoi("\n\n\n  -46\b9 \n5d6"));
	printf("orgenal : \n%d",atoi("\n\n\n  -46\b9 \n5d6"));
	return 0;
}*/
