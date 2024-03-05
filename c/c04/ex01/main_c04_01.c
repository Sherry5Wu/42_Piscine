/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c04_01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:42:55 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/22 15:43:04 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
    char str1[50] = "What day is it today?";
    char str2[10] = "^^)((H";
    
    printf("str1= %s\n", str1);
    printf("str2= %s\n\n", str2);
    ft_putstr(str1);
    write(1, "\n", 1);
    ft_putstr(str2);
    write(1, "\n", 1);
}

