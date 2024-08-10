/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:15:04 by prolivei          #+#    #+#             */
/*   Updated: 2024/08/01 10:25:24 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		if ((s1[i] && s2[i] != '\0'))
			i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(){
	char string1[] = "omg";
	char string2[] = "omg";
	ft_strcmp(string1, string2);

	printf("comparing: %i \n", ft_strcmp(string1, string2));
	printf("comparing lib: %i", strcmp(string1, string2));
	return (0);
}
*/
