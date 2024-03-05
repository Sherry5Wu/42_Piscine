#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char **strs;
    char *sep;
    int size;

    sep = " ~~";
    size = 3;
    strs = (char **)malloc(sizeof(char *) * 3);
    strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
    strs[1] = (char *)malloc(sizeof(char) * 8 + 1);
    strs[2] = (char *)malloc(sizeof(char) * 2 + 1);
    strs[0] = "Nihao";
    strs[1] = "Jingjing";
    strs[2] = "Wu";
    printf("Concatenated str=%s", ft_strjoin(size, strs, sep));
    free(strs);
    return (0);
}
