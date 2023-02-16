/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:41:36 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/28 12:02:22 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_dest;
	unsigned int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != 0)
	{
		i_dest++;
	}
	while (src[i_src] != 0 && i_src < nb)
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	dest[i_dest] = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	dest[200] = "hola";
	char	src[] = "quetal";

	printf("%s\n", strncat(dest, src, 4));
	//printf("%s\n", ft_strncat(dest, src, 4));
	return (0);
}
*/
