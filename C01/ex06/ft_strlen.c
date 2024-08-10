/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:55:35 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/26 10:14:43 by prolivei         ###   ########.fr       */
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
int	main(void)
{
	char	string[] = "123";
	char	chars;

	chars = ft_strlen(string);
	printf("contagem:%i\n", chars);		
	return(0);
}
*/
