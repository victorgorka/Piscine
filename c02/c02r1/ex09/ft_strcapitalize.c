/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:13:42 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/24 20:42:08 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//new_word = 1; -----> hay nueva palabra, pon la primera letra mayus
//new_wrod = 0; -----> por ahora recorro una palabra, no pongas mayus
char	ft_modify_case(char c, int new_word)
{
	if (new_word == 1 && (c >= 'a' && c <= 'z'))
	{	
		c -= 32;
	}
	else if (new_word == 0 && (c >= 'A' && c <= 'Z'))
	{
		c += 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	new_word = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '+' && str[i] != '-')
		{
			str[i] = ft_modify_case(str[i], new_word);
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char word[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(word));
}
*/
