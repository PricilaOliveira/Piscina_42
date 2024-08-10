/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:07:37 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/29 08:09:25 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int isnumeric;
	char a[] = "abc";

	isnumeric = ft_str_is_numeric(a);
	printf("só tem num ou é string vazia retornará 1. \n = %d\n", isnumeric);
	return (0);
}
*/
