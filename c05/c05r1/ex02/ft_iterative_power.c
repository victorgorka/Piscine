/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:23:14 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/03 09:20:38 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = power;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 1)
	{
		res *= nb;
		i--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(0,0));
}
*/
