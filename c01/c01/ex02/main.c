/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:36:13 by vde-prad          #+#    #+#             */
/*   Updated: 2022/02/17 20:47:10 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{	
	int a, b;

	a = 2;
	b = 4;
	ft_swap(&a, &b);
	printf("%d\n%d\n", a, b);
}