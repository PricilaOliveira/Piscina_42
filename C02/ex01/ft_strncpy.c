/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 07:59:29 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/29 12:41:40 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "test";
	char destiny[] = "0";
	unsigned int n;
	
	n = 4;

	printf("Before: \n src = %s \n dest = %s \n", src, destiny);
	ft_strncpy(destiny, src, n);
	printf("After: \n src = %s \n dest = %s \n", src, destiny);
	return (0);	
}
*/
