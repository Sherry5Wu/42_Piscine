/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:11:42 by jingwu            #+#    #+#             */
/*   Updated: 2024/03/07 08:40:15 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_char_a_sep(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	copy_word(char *dest, char *start, char *end)
{
	int	i;

	i = 0;
	while (start < end)
		dest[i++] = *(start++);
	dest[i] = '\0';
}

int	count_words(char *str, char *sep)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (is_char_a_sep(*str, sep) == 0 && !is_word)
		{
			count++;
			is_word = 1;
		}
		else if (is_char_a_sep(*str, sep) == 1)
			is_word = 0;
		str++;
	}
	return (count);
}

void	split_into_words(char **dest, char *str, char *charset, int words)
{
	int		i;
	char	*start;

	i = 0;
	while (*str && i < words)
	{
		if (is_char_a_sep(*str, charset) == 0)
		{
			start = str;
			while (*str && is_char_a_sep(*str, charset) == 0)
				str++;
			dest[i] = (char *)malloc(sizeof(char) * (str - start + 1));
			if (!dest[i])
				return ;
			copy_word(dest[i], start, str);
			i++;
		}
		else
			str++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res_str;
	int		words;

	words = count_words(str, charset);
	res_str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res_str)
		return (NULL);
	if (words > 0)
		split_into_words(res_str, str, charset, words);
	res_str[words] = 0;
	return (res_str);
}
