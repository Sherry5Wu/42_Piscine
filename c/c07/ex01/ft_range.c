/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:12:08 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/29 16:51:12 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pint;
	int	i;

	pint = (int *)malloc(sizeof(int *) * (max - min));
	if (pint == NULL)
		return (0);
	if (min >= max)
		return (0);
	else
	{
		i = 0;
		while (min < max)
			pint[i++] = min++;
		return (pint);
	}
}
