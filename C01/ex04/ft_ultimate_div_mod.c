/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:09:56 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/25 16:11:45 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x = 8;
	int	y = 3;
	int	*p1 = &x;
	int	*p2 = &y;
	
	printf("antes da func:%i, %i\n", x, y);
	ft_ultimate_div_mod(p1, p2);
	printf("depois da func:%i, %i\n", x, y);
	return (0);
}
*/
