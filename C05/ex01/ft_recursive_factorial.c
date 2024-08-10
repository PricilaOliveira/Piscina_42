/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:08:08 by prolivei          #+#    #+#             */
/*   Updated: 2024/08/07 14:12:32 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb > 0)
	{
		r *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (r);
}
/*
int	main(void)
{
	printf("%i", ft_recursive_factorial(4));
}
*/
