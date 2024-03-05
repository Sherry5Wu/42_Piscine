#include <stdio.h>
int *ft_range(int min, int max);

int main(void)
{
//    int *tab;
    int *p;
    int min = 3;
    int max = 50;

    p = ft_range(min, max);
    printf("min=%d  max=%d\n", min, max);
    for (int i = 0; i < (max - min); i++)
        printf("%d, ", p[i]);
//    tab = ft_range(10, -10);
//    if (!tab)
//        printf("Yes");
    return (0);
}
