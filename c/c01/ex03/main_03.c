/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:06:57 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/18 11:07:10 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int divide;
    int mod;
    int val1;
    int val2;
    
    val1 = 11;
    val2 = 5;
    printf("val1: %d, val2: %d\n", val1, val2);
    ft_div_mod(val1, val2, &divide, &mod);
    printf("divide: %d, remainder: %d", divide, mod);
    return(0);
}
