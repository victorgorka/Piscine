/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:03:45 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/22 11:08:23 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
	index++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char word[] = "hOla mUnDo, CaOs En Todo Tu espLendoR";
	printf("%s\n", ft_strlowcase(word));
}
*/
