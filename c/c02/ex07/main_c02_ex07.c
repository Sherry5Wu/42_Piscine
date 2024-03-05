/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex07.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:22:16 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 17:22:23 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
    char    str1[] = "HELLO";
    char    str2[] = "Hel2lo";
    char    str3[] = "world";

    printf("%s\n", ft_strupcase(str1));
    printf("%s\n", ft_strupcase(str2));
    printf("%s\n", ft_strupcase(str3));
}

