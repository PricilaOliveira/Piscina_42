/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:28:11 by prolivei          #+#    #+#             */
/*   Updated: 2024/08/07 17:18:34 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = power;
	result = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result *= nb;
		i--;
	}
	return (result);
}
/*
int	main(void)
{
	printf ("%i", ft_iterative_power(3, 2 ));
}
*/
