#include <stdio.h>
int ft_sqrt(int nb);

int    main(void)
{
    printf("sqrt of %d is %d\n", -1, ft_sqrt(-1));// 0
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0)); // 0
    printf("sqrt of %d is %d\n", 1, ft_sqrt(1)); // 1
    printf("sqrt of %d is %d\n", 2, ft_sqrt(2)); // 0
    printf("sqrt of %d is %d\n", 4, ft_sqrt(4)); // 2
    printf("sqrt of %d is %d\n", 7, ft_sqrt(7)); // 0
    printf("sqrt of %d is %d\n", 144, ft_sqrt(144)); // 12
    return (0);
}
