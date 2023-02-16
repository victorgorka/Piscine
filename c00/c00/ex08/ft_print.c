/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:56:15 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/17 10:43:12 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_combn(int n)
{
	char a;
	int x;

	//iteracion y reversion para imprimir cada digito
	if ( n > 0 && n < 10)
	{
		x = 9;
		while(x <= x-n)
		{
			a = x + '0';
			ft_putchar(a);
			x++;
			ft_putchar(',');
			ft_putchar(' ');
			n--;
			ft_print_combn(n);	
		}	
	}
}
