/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:18:19 by jingwu            #+#    #+#             */
/*   Updated: 2024/03/01 11:19:41 by jingwu           ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	else
		return (max - min);
}
