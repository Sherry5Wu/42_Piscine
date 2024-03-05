/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:23:23 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/28 16:45:49 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] == '\0' || str2[i] == '\0' || str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

void	ft_strswap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i <= (ac - 1))
	{
		j = i + 1;
		while (j <= (ac - 1))
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_strswap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= (ac - 1))
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
