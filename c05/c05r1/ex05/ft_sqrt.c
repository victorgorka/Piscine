/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:13:22 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/03 18:50:00 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (i <= nb / 2 && i <= 46341)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(2147483647));
}
*/
