/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c01_00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:39:07 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 11:39:30 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

//void    ft_putstr(char *str)
//{
//    while (*str)
//    {
//        write(1, str, 1);
//        str++;
//    }
//}

int	main()
{
	char arr_1[] = "abcde";
    char arr_2[] = "124556789";
	char dest_1[] = "edcba";
    char dest_2[] = "987654321";
    
    printf("dest_1 = %s\n", dest_1);
    printf("After own dest_1 =  %s\n", ft_strcpy(dest_1, arr_1));
    printf("After system dest_1= %s\n", strcpy(dest_1, arr_1));
    printf("dest_2 = %s\n", dest_2);
    printf("After own dest_2 =  %s\n", ft_strcpy(dest_2, arr_2));
    printf("After system dest_2= %s\n", strcpy(dest_2, arr_2));
}
