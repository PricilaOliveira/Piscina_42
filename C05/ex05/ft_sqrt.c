/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:27:47 by prolivei          #+#    #+#             */
/*   Updated: 2024/08/08 13:24:47 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	s_root;

	s_root = 0;
	while (s_root <= nb)
	{
		if ((s_root * s_root) == nb)
			return (s_root);
		s_root++;
	}
	return (0);
}
/*
int   main(void)
{

        printf("s_root:%i" ,ft_sqrt(25));

}
*/
