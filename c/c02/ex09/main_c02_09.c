/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_09.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:01:09 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 19:01:17 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char    *ft_strcapitalize(char *str);

int main(void)
{
    char    str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char    str2[] = "Hello, i have a good day!";
    char    str3[] = "good day";

    printf("%s\n", ft_strcapitalize(str1));
    printf("%s\n", ft_strcapitalize(str2));
    printf("%s\n", ft_strcapitalize(str3));
}
