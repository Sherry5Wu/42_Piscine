/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:38:30 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/20 11:38:39 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    
	while (*src)
	{
        i = 0;
        if (*src[i] != '\0')
        {
            *dest[i] = *src[i];
            i++;
        }
	}
	*dest[i] = '\0';
    printf("dest = %s\n", dest);
	return (dest);
}
