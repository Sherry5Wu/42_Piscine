#include <stdio.h>
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main()
{
    printf("The prime numbers within 100 are:\n");
    printf("2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.\n\n");
    printf("%d -> %d\n", -2, ft_find_next_prime(-2)); // 2
    printf("%d -> %d\n", 0, ft_find_next_prime(0)); // 2
    printf("%d -> %d\n", 1, ft_find_next_prime(1)); // 2
    printf("%d -> %d\n", 2, ft_find_next_prime(2)); // 2
    printf("%d -> %d\n", 6, ft_find_next_prime(6)); // 7
    printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647)); // 37
    return 0;
}
