/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:04:19 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 15:05:40 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int    main()
{
    char arr_1[] = "helloWorld";
    char arr_2[] = "12456789";
    char dest_1[20];
    char dest_2[40];
    
    printf("dest_1 = %s\n", dest_1);
    printf("After own dest_1 =  %s\n", ft_strncpy(dest_1, arr_1,8));
    printf("After system dest_1= %s\n", strncpy(dest_1, arr_1, 8));
    printf("dest_2 = %s\n", dest_2);
    printf("After own dest_2 =  %s\n", ft_strncpy(dest_2, arr_2, 5));
    printf("After system dest_2= %s\n", strncpy(dest_2, arr_2, 5));
}
