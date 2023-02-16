/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:23:40 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/01 20:37:34 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != 0)
		{
			if (to_find[j + 1] == 0)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	str[] ="la respuesta es 42";
	char	to_find[] = "";
	//printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
	//printf("%s\n", str);
	//printf("%d", ft_word_len(to_find));
	return (0);	
}
*/
