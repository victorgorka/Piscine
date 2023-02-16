/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:20:20 by vde-prad          #+#    #+#             */
/*   Updated: 2022/03/03 17:31:47 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != 0 && s2[i] != 0))
		i++;
	return (s1[i] - s2[i]);
}
int	main(int argc, char **argv)
{	
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= (argc -1))
	{
			
		i++;
	}
}
