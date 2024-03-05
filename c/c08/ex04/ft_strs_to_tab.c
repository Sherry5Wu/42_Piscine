/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:49:11 by jingwu            #+#    #+#             */
/*   Updated: 2024/03/04 10:01:24 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *str)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!newstr)
		return (NULL);
	while (str[i])
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str_array;
	int			i;

	i = 0;
	str_array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str_array)
		return (NULL);
	while (i < ac)
	{
		str_array[i].size = ft_strlen(av[i]);
		str_array[i].str = av[i];
		str_array[i].copy = ft_strdup(av[i]);
		i++;
	}
	str_array[i].str = 0;
	str_array[i].copy = 0;
	return (str_array);
}
