/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:06:53 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/03 16:31:57 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	j = argc - 1;
	i = 0;
	while (j > 0)
	{
		while (argv[j][i] != 0)
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j--;
	}
	return (0);
}
