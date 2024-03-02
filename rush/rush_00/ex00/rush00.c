/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:33:03 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/17 12:46:14 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	len;

	if (x < 1 || y < 1)
		return ;
	len = 1;
	while (len <= y)
	{
		wid = 1;
		while (wid <= x)
		{
			if ((wid == 1 || wid == x) && (len == 1 || len == y))
				ft_putchar('o');
			else if (wid == 1 || wid == x)
				ft_putchar('|');
			else if (len == 1 || len == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			wid++;
		}
		len++;
		ft_putchar('\n');
	}
}
