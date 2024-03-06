/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex08.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:05:21 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 18:06:58 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
    char    str1[] = "NIHAO";
    char    str2[] = "HEl2lo";
    char    str3[] = "world";

    printf("%s\n", ft_strlowcase(str1));
    printf("%s\n", ft_strlowcase(str2));
    printf("%s\n", ft_strlowcase(str3));
}

