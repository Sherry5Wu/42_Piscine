/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:36:02 by jingwu            #+#    #+#             */
/*   Updated: 2024/03/04 11:14:18 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnb(int nb)
{
	char	n;

	if (nb > 9)
	{
		ft_putnb(nb / 10);
		ft_putnb(nb % 10);
	}
	else
	{
		n = nb + '0';
		write (1, &n, 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnb(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}
