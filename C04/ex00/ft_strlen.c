/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:23:14 by prolivei          #+#    #+#             */
/*   Updated: 2024/08/04 08:19:59 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char string[] = "test";
	printf("string contain = %i\n", ft_strlen(string));
	printf("string contain = %li", strlen(string));
	return(0);
}
*/
