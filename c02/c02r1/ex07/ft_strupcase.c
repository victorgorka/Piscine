/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:54:04 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/22 18:06:47 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
	index++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char word[] = "hola mundo";
	printf("%s\n", ft_strupcase(word));
}
*/
