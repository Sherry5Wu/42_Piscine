#include <stdio.h>
int  ft_ultimate_range(int **ft_range, int min, int max);//here delcared as "**ft_range", because we need to pass a pointer's address in, so it needs double poniters here.

int main(void)
{
    int *range;
    int min = -3;
    int max = 20;

    printf("min=%d  max=%d\n", min, max);
    printf("size of the range is=%d\n", ft_ultimate_range(&range, min, max));// &range is to get the address of a address, so it can pass to "**range".
    for (int i = 0; i < (max - min); i++)
        printf("%d, ", range[i]);
    return (0);
}
