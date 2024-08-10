/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:11:51 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/29 13:30:11 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int isuppercase;
	char test[] = "AAaa";
	isuppercase = ft_str_is_uppercase(test);
	printf("%d\n", isuppercase);
}
*/
