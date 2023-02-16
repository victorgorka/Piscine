/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:09:59 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/19 13:25:20 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	pos_in;
	int	total_size;

	total_size = size;
	pos_in = 0;
	size--;
	while (pos_in < total_size / 2 && pos_in != size)
	{
		aux = tab[pos_in];
		tab[pos_in] = tab[size];
		tab[size] = aux;
		size--;
		pos_in++;
	}
}
/*
#include <stdio.h>

int	main (void)
{
	int n = 0;
	int tab[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};	


	ft_rev_int_tab(tab, 21);
	while (n < 21)
	{
		printf("%d\n", tab[n]);
		n++;
	}
}
*/
