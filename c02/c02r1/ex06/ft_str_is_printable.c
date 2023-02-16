/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:45:58 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/22 18:06:06 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
		}
		else
		{
			res = 0;
		}
	str++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main (void)
{
	printf("%d\n",ft_str_is_printable(""));
	return (0);
}
*/
