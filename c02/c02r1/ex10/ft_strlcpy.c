/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:45:21 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/24 18:32:17 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tot_len;

	tot_len = 0;
	i = 0;
	while (dest[i] != 0 && src[i] != 0)
	{
		if (i <= size)
		{
			dest[i] = src[i];
		}
	i++;
	}
	i = 0;
	while (src[i])
	{
		tot_len++;
		i++;
	}
	return (tot_len);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[200]= "hola que tal";
	char src[4]= "";

	printf("%lu\n", strlcpy(dest, src, 0));
//	printf("%d\n", ft_strlcpy(dest, src, 0));
	printf("%s", dest);
	return (0);
}
*/
