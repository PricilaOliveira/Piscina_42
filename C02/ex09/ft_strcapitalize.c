/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:19:13 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/29 14:07:05 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter;

	i = 0;
	first_letter = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && first_letter)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !first_letter)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			first_letter = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			first_letter = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			first_letter = 0;
		else
			first_letter = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char test[] = "testing 12test test";
	printf("%s\n", ft_strcapitalize(test));
	return (0);
}
*/
