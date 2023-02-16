/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:32:58 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/02 11:03:57 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	count = ft_strlen(dest);
	j = 0;
	i = 0;
	if (ft_strlen(dest) > size)
	{
		return (size + ft_strlen(src));
	}
	while (dest[i] != 0)
	{
		i++;
	}
	while (i < size - 1 && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (count + ft_strlen(src));
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char	dest[200] = "holasdfsdfsdf";
	char	src[] = "5 pouic pouic";

	printf("%d\n", ft_strlcat(dest, src, 10));
//	printf("%lu\n", strlcat(dest, src, 10));
	printf("%s", dest);
	return (0);
}

