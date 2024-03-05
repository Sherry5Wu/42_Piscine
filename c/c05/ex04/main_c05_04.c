#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
    char fibonacci[100] = "0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377";
    printf("fibonacci=%s\n",fibonacci);
    printf("Index -1=%d\n", ft_fibonacci(-1)); //-1
    printf("Index 0=%d\n", ft_fibonacci(0)); // 0
    printf("Index 1=%d\n", ft_fibonacci(1)); // 1
    printf("Index 6=%d\n", ft_fibonacci(6)); // 8
    printf("Index 10=%d\n", ft_fibonacci(10)); // 55
}

