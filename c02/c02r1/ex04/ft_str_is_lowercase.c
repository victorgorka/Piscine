/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:17:26 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/21 16:54:36 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
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
		printf("%d\n", ft_str_is_lowercase("asd"));
}
*/
