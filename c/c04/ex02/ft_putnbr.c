/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:37:42 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/25 09:37:45 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>

void ft_putchar(char c)
{
    write(1 , &c, 1);
}

/*
INT_MIN= -2147483648; INT_MAX=2147483647. INT_MIN is a special case. When nb equals INT_MIN, simply negating it (-nb) would cause an overflow because the absolute value of INT_MIN is greater than INT_MAX. Hence, it's necessary to handle this case separately.
 */
void ft_putnbr(int nb)
{
    if (nb >= INT_MIN && nb <= INT_MAX)
    {
        if (nb == INT_MIN)
        {
            ft_putchar('-');
            ft_putchar('2');
            ft_putnbr(147483648);
        }
        else if (nb < 0)
        {
            ft_putchar('-');
            ft_putnbr(-nb);
        }
        else if (nb >= 10)
        {
            ft_putnbr(nb / 10); // to get all the digits except last one, eg, nb = 123, then nb/10 = 12.
            ft_putnbr(nb % 10); // to get the last digit. But here it is still a digit, not char. so we need call ft_putnbr here to enable to output it.
        }
        else
        {
            ft_putchar(nb + '0');
        }
    }
}
