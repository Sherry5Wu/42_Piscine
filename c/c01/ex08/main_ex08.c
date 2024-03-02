/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:41:01 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/19 12:28:01 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void    ft_sort_int_tab(int *tab, int size);
void    ft_swap(int *a, int *b);

int    main(void)
{
    int    arr[3] = {7,6,4};
    int len;
    int i;

    len = sizeof(arr)/sizeof(arr[0]);
    i = 0;
    
    printf("The original array1 are: ");
    for (; i < len; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
    ft_sort_int_tab(arr, len);
    printf("The sorted array1 are: ");
    for (i = 0; i < len; i++)
    {
        printf("%d   ", arr[i]);
    }
  
}
