/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:18:18 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/01 15:38:03 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	return (n);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "Hola Mundo";

	printf("Numero de caracteres = %d\n", ft_strlen(str));
}
