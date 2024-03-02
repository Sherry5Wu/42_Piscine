/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:13:50 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/17 15:03:43 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	len;
	int	wid;

	if (x < 0 || y < 0)
		return ;
	wid = 1;
	while (wid <= y)
	{
		len = 1;
		while (len <= x)
		{
			if (1 < len && len < x && 1 < wid && wid < y)
				ft_putchar(' ');
			else if (wid == 1 && (len == 1 || len == x))
				ft_putchar('A');
			else if (wid == y && (len == 1 || len == x))
				ft_putchar('C');
			else
				ft_putchar('B');
			len++;
		}
		ft_putchar('\n');
		wid++;
	}
}
