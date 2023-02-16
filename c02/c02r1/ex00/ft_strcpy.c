/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:33:24 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/24 19:20:59 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main (void)
{
	char	src[] = "";
	char	dest[] = "Hoasasdasdasdda";

	printf("%s", strcpy(dest, src));
//	printf("%s", ft_strcpy(dest, src));
}
*/
