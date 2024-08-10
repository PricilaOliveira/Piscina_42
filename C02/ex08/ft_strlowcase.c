/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:17:40 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/29 08:18:45 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main() 
{
	char test[] = "OMG!";
	printf("%s \n", ft_strlowcase(test));
	return (0);
}
*/
