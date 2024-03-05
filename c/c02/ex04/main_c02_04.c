/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:43:38 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 16:43:51 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main()
{
    char    str1[] = "13456";
    char    str2[] = "Hello2";
    char    str3[] = "";
    char    str4[] = "abc";
    int ret1;
    int ret2;
    int ret3;

    ret1 = ft_str_is_lowercase(str1);
    ret2 = ft_str_is_lowercase(str2);
    ret3 = ft_str_is_lowercase(str3);
    printf("%d\n", ret1);
    printf("%d\n", ret2);
    printf("%d\n", ret3);
    printf("%d\n", ft_str_is_lowercase(str4));
}

