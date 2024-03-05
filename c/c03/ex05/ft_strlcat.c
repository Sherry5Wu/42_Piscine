/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:53:53 by jingwu            #+#    #+#             */
/*   Updated: 2024/02/22 11:53:57 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// https://42-cursus.gitbook.io/guide/rank-00/libft/libc-functions/ft_strlcat
// https://opensource.apple.com/source/Libc/Libc-262/string/strlcat.c.auto.html
unsigned int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int d_len;
    unsigned int s_len;

    d_len = ft_strlen(dest);
    s_len = ft_strlen(src);
    if  (d_len <= size)
        return (d_len + s_len);
    else
        
}
