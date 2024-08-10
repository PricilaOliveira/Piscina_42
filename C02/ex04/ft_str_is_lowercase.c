/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:09:55 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/29 12:36:28 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
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
	int	islowercase;
	char test[] = "a";
	islowercase = ft_str_is_lowercase(test);
	printf("lowercase and alpha %d\n", islowercase);
	return (0);
}
*/
