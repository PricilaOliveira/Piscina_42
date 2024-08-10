/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolivei <prolivei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:42:40 by prolivei          #+#    #+#             */
/*   Updated: 2024/07/22 18:57:32 by prolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    rush(int x, int y)
{
        int row;
        int column;

        row = 1;
        column = 1;

        while ((row <= y) && (row >= x || column <=y ))
        {
                while (column <= x)
                {
                        if ((row == 1 && column == 1) || (row == 1 && column == x)) 
                                ft_putchar('A');
                        else if ((row == y && column == 1) || (row == y && column == x)) 
                                ft_putchar('C');
			else if((row > 1 && row < y) && (column > 1 && column < x))
				ft_putchar(' ');
			else 
				ft_putchar('B');

		 	column ++; 
              
                }   
             	column = 1;
	     	ft_putchar('\n');
                row++;
        }
}

int     main(void)
{
        rush(1, 2); 
        return(0);
}
