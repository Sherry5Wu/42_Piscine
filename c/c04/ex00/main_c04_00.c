/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c04_00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:29:28 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/22 15:29:36 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
    char str1[10] = "hello";
    char str2[5] =  "";
    
    printf("str1= %s\n", str1);
    printf("str2= %s\n", str2);
    printf("System str1= %lu\n", strlen(str1));
    printf("Own str1= %d\n\n", ft_strlen(str1));
    
    printf("System str2= %lu\n", strlen(str2));
    printf("Own str2= %d\n", ft_strlen(str2));
}

