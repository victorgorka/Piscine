/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:46:02 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/21 18:35:49 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		write(1, &str[n], 1);
		n++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hola Mundo";
	
	ft_putstr(str); 
}
*/
