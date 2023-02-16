/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:22:38 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/03 20:37:18 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(23));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(2147483647));
}
*/
