/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:25:01 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/26 12:00:10 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	integer;
	int	is_negtive;

	is_negtive = 1;
	integer = 0;
	while ((*str == ' ' || *str == '\f' || *str == '\n') && *str)
		str++;
	while ((*str == '\r' || *str == '\t' || *str == '\v') && *str)
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
	return (integer * is_negtive);
}
