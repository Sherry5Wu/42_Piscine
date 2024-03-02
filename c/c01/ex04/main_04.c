/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:35:37 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/18 12:49:22 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = 4;
	printf ("a= %d   b= %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf ("a= %d   b= %d\n", a, b);
}
