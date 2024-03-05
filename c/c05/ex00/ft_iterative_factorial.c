/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:34:41 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/27 14:34:13 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (result);
	else
	{
		i = 1;
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
}
