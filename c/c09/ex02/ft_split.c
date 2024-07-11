/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:37:01 by jingwu            #+#    #+#             */
/*   Updated: 2024/03/06 11:37:45 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int is_char_a_sep(char c, char *str) {
    while (*str) {
        if (*str == c)
            return 1;
        str++;
    }
    return 0;
}

void copy_word(char *dest, char *start, char *end) {
    int i = 0;
    while (start < end)
        dest[i++] = *(start++);
    dest[i] = '\0';
}

int count_words(char *str, char *sep) {
    int count = 0;
    int is_word = 0;
    while (*str) {
        if (is_char_a_sep(*str, sep) == 0 && !is_word) {
            count++;
            is_word = 1;
        } else if (is_char_a_sep(*str, sep) == 1)
            is_word = 0;
        str++;
    }
    return count;
}

void split_into_words(char **dest, char *str, char *charset, int words) {
    int i = 0;
    while (*str && i < words) {
        if (is_char_a_sep(*str, charset) == 0) {
            char *start = str;
            while (*str && is_char_a_sep(*str, charset) == 0)
                str++;
            dest[i] = (char *)malloc(sizeof(char) * (str - start + 1));
            if (!dest[i]) {
                // Handle memory allocation failure here
                return;
            }
            copy_word(dest[i], start, str);
            i++;
        } else
            str++;
    }
}

char **ft_split(char *str, char *charset) {
    char **res_str;
    int words;

	words = 0;
	words= count_words(str, charset);
    res_str = (char **)malloc(sizeof(char *) * (words + 1));
    if (!res_str)
        return NULL;
    if (words > 0)
        split_into_words(res_str, str, charset, words);
    res_str[words] = NULL;
    return res_str;
}

// void ft_putstr(char *str) {
//     int i = 0;
//     while (str[i] != '\0') {
//         write(1, &str[i], 1);
//         i++;
//     }
// }

// int main() {
//     char *str = "hello~";
//     char *charset = "";
//     char **result = ft_split(str, charset);
//     int i = 0;
//     while (result[i] != 0) {
//         ft_putstr(result[i]);
//         write(1, "\n", 1);
//         i++;
//     }
//     return 0;
// }
