/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:59:02 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/16 15:06:00 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(int a)
{
	char	ca;

	ca = a + '0';
	write(1, &ca, 1);
}

void	ft_putnbr(int nb)
{	
	int	divider;
	int	aux;

	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	divider = 1;
	aux = nb;
	while (aux != 0)
	{
		aux /= 10;
		if (aux != 0)
		{
		divider *= 10;
		}
	}
	aux = nb;
	while (aux != 0)
	{
		putchar (aux / divider);
		aux = aux - ((aux / divider) * divider);
		divider /= 10;
	}
}
/*
int main(void)
{
	ft_putnbr(42);
}
*/
