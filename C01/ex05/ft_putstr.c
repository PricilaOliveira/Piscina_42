/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:16:55 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/26 11:36:22 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		write(1, &str[i], 1);
		str++;
	}
}

/*
int	main(void)
{
	char string[] = "agora vai\n";
	char *ptr;
	
	ptr = string;
	ft_putstr(ptr);	
	return(0);
}
*/
