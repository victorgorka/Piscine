/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:36:19 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/25 13:56:14 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>
int	main (void)
{
	char	src[] = "hey";
	char	dest[] = "hola Tierra";

//	printf("%s", strncpy(dest, src, 4));
	printf("%s",ft_strncpy(dest, src, 3));
//	printf("%s\n", dest);
}

