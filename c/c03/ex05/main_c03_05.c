/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c03_05.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:58:01 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/22 11:58:06 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

//int char_to_int(char c)
//{
//    if (c >= '0' && c <= '9')
//        return (c - '0');
//    else
//        return (0);
//}

int main(void)
{
    char dest1[7] = "hello";
    char src1[5] = "jing";
    int size1 = 4;

    printf("dest1= %s\n", dest1);
    printf("src1= %s\n", src1);
    printf("size1= %d\n\n", size1);
    printf("System strlcat= %lu\n", strlcat(dest1, src1 , size1));
    return (0);
}

//int main(int argc, char *argv[])
//{
//    int size;
//
//    if (argc == 4)
//    {
//        size = char_to_int(argv[3]);
//        printf("dest= %s\n", argv[1]);
//        printf("src= %s\n", argv[2]);
//        printf("size= %d\n\n", size);
//        printf("System strlcat= %lu\n", strlcat(argv[1], argv[2], size));
//    }
//    return (0);
//}
