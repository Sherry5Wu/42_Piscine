/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:39:58 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/18 15:28:20 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size);
void    ft_swap(int *a, int *b);

int	main(void)
{
    int	arr[5] = {1, 2, 3, 4, 5};
    int len;
    int i;

    len = sizeof(arr)/sizeof(arr[0]);
    i = 0;
     
	printf("Original Array: ");
    for (; i < len; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
    ft_rev_int_tab(arr, len);
    printf("Reversed Array: ");
    for (i = 0; i < len; i++)
    {
        printf("%d   ", arr[i]);
    }
}
