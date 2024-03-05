/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:01:45 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/26 16:54:56 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
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

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	if (is_base_valid(base))
	{
		len = ft_strlen(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base((nbr * -1), base);
		}
		if (nbr >= len)
		{
			ft_putnbr_base((nbr / len), base);
			ft_putchar(base[nbr % len]);
		}
		else
			ft_putchar(base[nbr % len]);
	}
}
