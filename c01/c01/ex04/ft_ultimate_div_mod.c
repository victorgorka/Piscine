/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:40:27 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/18 09:59:10 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}
/*
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{	
	int	a;
	int	b;

	a = 5;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
}
*/
