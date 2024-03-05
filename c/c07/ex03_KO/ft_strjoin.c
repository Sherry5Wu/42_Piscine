/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:33:39 by jingwu            #+#    #+#             */
/*   Updated: 2024/03/04 14:26:05 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	concatenate_strs(char *whole_str, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (*strs[i])
		{
			whole_str[j++] = *strs[i];
			strs[i]++;
		}
		if (i != (size - 1))
		{
			while (sep[k])
                whole_str[j++] = sep[k++];
		}
		k = 0;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*f_str;
	unsigned int	len;
	int				i;

	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len = len + ft_strlen(sep) * (size - 1);
	f_str = (char *)malloc(sizeof(char) * len + 1);
	if (!f_str)
		return (NULL);
	if (size == 0)
		f_str = NULL;
	concatenate_strs(f_str, size, strs, sep);
	return (f_str);
}
