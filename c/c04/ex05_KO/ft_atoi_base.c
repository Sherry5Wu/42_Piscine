/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:03:03 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/26 17:05:31 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	integer;
	int	is_negtive;

	printf("Now in ft_atoi.");
    is_negtive = 1;
	integer = 0;
	while (((*str >= 9 && *str <= 13 ) || *str == 32 )&& *str)
		str++;
	while ((*str == '-' || *str == '+') && *str)
	{
		if (*str == '-')
			is_negtive *= -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str)
	{
		integer = integer * 10 + (*str - '0');
		str++;
	}
    printf("in ft_atoi, integer=%d\n", integer * is_negtive);
	return (integer * is_negtive);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	printf("Now in is_base_valid.\n");
    i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
    {
        printf("base input is invalid branch 1.\n");
        return (0);
    }
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9 && base[i] <= 13 ) || base[i] == 32 )
		{
			printf("base input is invalid branch 2.\n");
            return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
            {
                printf("base input is invalid branch 3.\n");
                return (0);
            }
			j++;
		}
		i++;
	}
    printf("base input is valid.\n");
	return (1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	len;
    int integer;
    int notation;
    int radix;

	printf("Now in ft_putnbr_base.");
    len = 0;
    notation = 1;
    radix  = 1;
    integer = 0;
	if (is_base_valid(base))
	{
		len = ft_strlen(base);
		if (nbr < 0)
		{
			notation = -1;
			nbr = nbr * -1;
		}
		if (nbr >= len)
		{
			while (nbr)
            {
                integer += (nbr % len) * radix;
                nbr /= len;
                radix *= 10;
            }
		}
	}
    printf("result number=%d\n", integer * notation);
    return (integer * notation);
}

int ft_atoi_base(char *str, char *base)
{
    return (ft_putnbr_base(ft_atoi(str), base));
}
