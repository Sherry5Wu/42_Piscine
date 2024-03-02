/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:01:57 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/19 15:38:18 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while ((size - 1 - i) >= 0)
	{
		j = i + 1;
		while ((size - j) > 0)
		{
			if (*(tab + i) > *(tab + j))
				ft_swap((tab + i), (tab + j));
			j++;
		}
		i++;
	}
}
