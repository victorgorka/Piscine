/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:25:54 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/16 11:16:51 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_col(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	b1 = b / 10 + '0';
	b2 = b % 10 + '0';
	if (a != b)
	{
		write(1, &a1, 1);
		write(1, &a2, 1);
		write(1, " ", 1);
		write(1, &b1, 1);
		write(1, &b2, 1);
		if (!(a == 98 && b == 99))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_col(a, b);
			b++;
		}
		a++;
		b = 0;
	}
}
/*
int main(void)
{
	ft_ print_comb2();
}
*/
