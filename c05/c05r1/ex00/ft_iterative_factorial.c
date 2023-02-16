/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:41:59 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/03 09:10:55 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	int x = -1;

	printf("%d", ft_iterative_factorial(x));
}
*/
