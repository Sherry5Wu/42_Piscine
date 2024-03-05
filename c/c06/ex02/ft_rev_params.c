/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:44:54 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/28 11:54:42 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = ac - 1;
		while (i)
		{
			while (*av[i])
			{
				ft_putchar(*av[i]);
				av[i]++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	else
		return (0);
}
