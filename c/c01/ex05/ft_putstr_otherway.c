/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:51:26 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/18 14:01:01 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
 Create a function that displays a string of characters on the standard output.
 */
// This is the first way to do it.
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// This is the second way to do it.
void    ft_putstr(char *str)
{
    int    len;

    i = 0;
    while (str[len])
        len++;
    write(1, &str, len);
}

// This is the third way to do it.
void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++
    }
}
