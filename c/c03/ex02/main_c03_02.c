/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c03_02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:28:33 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/21 13:28:39 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

//int main(int argc, char *argv[])
//{
//    if (argc == 3)
//    {
//        printf("dest= %s\n", argv[1]);
//        printf("src= %s\n", argv[2]);
//        printf("OWN src to dest= %s\n", ft_strcat(argv[1],argv[2]));
//        printf("SYSTEM src to dest= %s\n", strcat(argv[1],argv[2]));
//    }
//    return 0;
//}

int main(void)
{
    char dest1[50] = "hello";
    char dest2[50] = "hello";
    char src[10] = " world";

    char dest3[50] = "This is a ";
    char dest4[50] = "This is a ";
    char src1[20] = "small world";

    printf("OWN src to dest= %s\n", ft_strcat(dest1, src));
    printf("SYSTEM src to dest= %s\n\n", strcat(dest2, src));

    printf("OWN src to dest= %s\n", ft_strcat(dest3, src1));
    printf("SYSTEM src to dest= %s\n\n", strcat(dest4, src1));
}
