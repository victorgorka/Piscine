/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:18:28 by irmoreno          #+#    #+#             */
/*   Updated: 2023/02/16 12:21:10 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	firslast_line(int cw, int x, int ch, int y)
{
	char	corner1;
	char	corner2;

	corner1 = 'A';
	corner2 = 'C';
	if (ch == y - 1)
	{
		corner1 = 'C';
		corner2 = 'A';
	}
	if (cw == 0)
		ft_putchar(corner1);
	else if (cw == x - 1)
		ft_putchar(corner2);
	else if (cw % x != 0)
		ft_putchar('B');
}

void	mid_lines(int cw, int x)
{
	if (cw == 0 || cw == x - 1)
		ft_putchar('B');
	else if (cw % x != 0)
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	currentwidth;
	int	currentheight;

	currentwidth = 0;
	currentheight = 0;
	while (currentheight < y)
	{
		while (currentwidth < x)
		{
			if (currentheight == 0 || currentheight == y - 1)
			{
				firslast_line(currentwidth, x, currentheight, y);
				currentwidth++;
			}
			else if (currentheight < y - 1)
			{
				mid_lines(currentwidth, x);
				currentwidth++;
			}
		}
		ft_putchar('\n');
		currentheight++;
		currentwidth = 0;
	}
}
