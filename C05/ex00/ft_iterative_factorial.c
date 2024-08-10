/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 08:48:19 by prolivei          #+#    #+#             */
/*   Updated: 2024/08/07 14:10:30 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (r);
}
/*
int	main(void)
{
	printf("%d",ft_iterative_factorial(5));
	return 0;
}
*/
