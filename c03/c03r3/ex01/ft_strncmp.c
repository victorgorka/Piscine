/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:05:23 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/01 20:38:30 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str1[] = "hola";
	char	str2[] = "hala";
	
	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", strncmp(str1, str2, 4));
	return(0);
}

s2 == 0 && s1 ==0 return 0
while i<n if(s1 == s2) i++ 
*/
