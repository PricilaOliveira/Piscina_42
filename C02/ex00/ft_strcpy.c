/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 07:54:35 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/29 12:39:37 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "string.";
	char destiny[] = "destiny.";
	char *dest;

	printf("Before:\n src = %s \n dest = %s \n\n", src, destiny);
	
	dest = ft_strcpy(destiny, src);

	printf("After: \n src = %s \n dest = %s", src, dest);
	return (0);
}
*/
