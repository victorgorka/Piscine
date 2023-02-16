/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:53:49 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/21 17:02:00 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else if (str != 0)
		{
			res = 0;
		}
	str++;
	}	
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
		printf("%d\n", ft_str_is_numeric(""));
}
*/
