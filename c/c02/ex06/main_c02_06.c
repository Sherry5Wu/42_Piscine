/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_06.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:12:08 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 17:12:14 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str);

int main()
{
    char    str1[] = "Hello";
    char    str2[] = "He\nllo2";
    char    str3[] = "";
    int ret1;
    int ret2;
    int ret3;

    ret1 = ft_str_is_printable(str1);
    ret2 = ft_str_is_printable(str2);
    ret3 = ft_str_is_printable(str3);
    printf("%d\n", ret1);
    printf("%d\n", ret2);
    printf("%d\n", ret3);
}

