/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c03_04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:57 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/22 09:28:00 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        printf("str= %s\n", argv[1]);
        printf("to_find= %s\n", argv[2]);
        printf("System= %s\n", strstr(argv[1],argv[2]));
        printf("My own= %s\n", ft_strstr(argv[1],argv[2]));
    }
    return 0;
}
