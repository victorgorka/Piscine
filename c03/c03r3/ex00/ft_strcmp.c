/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:56:51 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/01 19:28:33 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Si un caracter de s2 es una posicion mayor que el caracter del mismo
indice de s1, el resultado es -1
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != 0 && s2[i] != 0))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char s1[] = "asdasd";
	char s2[] = "hola";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
*/
