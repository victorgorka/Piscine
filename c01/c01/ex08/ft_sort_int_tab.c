/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:50:34 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/19 23:51:10 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	aux;
	int	num_change;

	num_change = 1;
	index = 0;
	while (num_change == 1)
	{
		num_change = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				num_change = 1;
				aux = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = aux;
			}
			index++;
		}
		index = 0;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int index = 0;
	int nums[10] = {0,6,8,7,4,5,9,1,2,3};
	ft_sort_int_tab(nums, 10);
	while(index < 10)
	{
		printf("%d\n", nums[index]);
		index++;
	}
}
*/
