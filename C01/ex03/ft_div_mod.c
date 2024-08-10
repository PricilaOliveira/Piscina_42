/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:05:17 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/25 14:03:26 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x = 10;
	int	y = 3;
		
	int	*mod = &x;
	int	*div = &y;
	ft_div_mod(x, y, div, mod);
	
	printf("div: %i mod: %i x: %i y: %i", *div, *mod, x, y );
	return(0);
}
*/
