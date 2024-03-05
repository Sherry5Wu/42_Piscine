#include <stdio.h>
int ft_is_prime(int nb);

int main()
{
    printf("%d -> %d\n", -12, ft_is_prime(-12)); // 0
    printf("%d -> %d\n", 0, ft_is_prime(0)); // 0
    printf("%d -> %d\n", 1, ft_is_prime(1)); // 0
    printf("%d -> %d\n", 2, ft_is_prime(2)); // 1
    printf("%d -> %d\n", 9, ft_is_prime(9));// 0
    printf("%d -> %d\n", 7, ft_is_prime(7)); // 1
    printf("%d -> %d\n", 204, ft_is_prime(204)); //0
    printf("%d -> %d\n", 205, ft_is_prime(205)); // 0
    printf("%d -> %d\n", 97, ft_is_prime(97)); // 1
    return 0;
}
