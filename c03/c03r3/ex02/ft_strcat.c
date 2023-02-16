/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:10:18 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/28 11:49:56 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != 0)
	{
		i_dest++;
	}
	while (src[i_src] != 0)
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	dest[i_dest] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[200] = "hola";
	char	src[] = ", que tal?";

	printf("%s\n", strcat(dest, src));
	//printf("%s\n", ft_strcat(dest, src));
	return (0);
}
*/
