/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:01 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 16:22:15 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main()
{
    char
    str1[] = "13456";
    char str2[] = "Hello2";
    char str3[] = "";
    int ret1;
    int ret2;
    int ret3;

    ret1 = ft_str_is_numeric(str1);
    ret2 = ft_str_is_numeric(str2);
    ret3 = ft_str_is_numeric(str3);
    printf("%d\n", ret1);
    printf("%d\n", ret2);
    printf("%d\n", ret3);
}

