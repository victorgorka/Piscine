/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:27:24 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/17 12:36:36 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_true(char x, char y, char z)
{
	if ((x < y && y < z))
	{
		write (1, &x, 1);
		write (1, &y, 1);
		write (1, &z, 1);
		if (!(x == '7' && y == '8' && z == '9'))
		{
			write (1, ", ", 2);
		}
	}	
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '0';
	z = '0';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				print_true(x, y, z);
				z++;
			}
			z = y;
			y++;
		}
		y = x;
		x++;
	}
}
/*
int main(void)
{
	ft_print_comb();
}
*/
