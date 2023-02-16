/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:23:45 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/18 09:33:07 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);
int	main(void)
{
	int a, b, div, mod;

	a = 5;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\nmod = %d\n", div, mod);
}
*/
