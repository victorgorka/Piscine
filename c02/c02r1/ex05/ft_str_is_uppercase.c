/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:00:21 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/21 17:07:54 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
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
		printf("%d\n", ft_str_is_uppercase(""));
}
*/
