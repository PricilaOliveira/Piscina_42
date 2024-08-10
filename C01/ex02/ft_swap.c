/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:34:11 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/25 12:02:44 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	var1;
	int	var2;

	var1 = *a;
	var2 = *b;
	*b = var1;
	*a = var2;
}

/*
#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;
	
	x = 5;
	y = 10;
	printf("antes de inverter:\n x = %i y = %i\n", x, y);
	ft_swap(&x, &y);
	printf("depois de inverter:\n a = %i  e b = %i\n", x, y);
}
*/
