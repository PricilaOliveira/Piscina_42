/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:25:54 by prolivei          #+#    #+#             */
/*   Updated: 2024/08/04 08:19:23 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	n;
	int	sign;
	int	i;	

	n = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - 48) + (n * 10);
		i++;
	}
	return (n * sign);
}
/*
int	main(void)
{
		printf("%d\n", ft_atoi(" ---+--+1234ab567"));
		printf("%d\n", ft_atoi("+123"));
		printf("%d\n", ft_atoi("-300"));
	return(0);
}
*/
