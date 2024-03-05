#include <stdio.h>
int    ft_iterative_power(int nb, int power);

int main(void)
{
    int nb[10] = {0, 1, -2, 3, 6, 34};
    int power1 = -1;
    int power2 = 0;
    int power3 = 5;
    
    printf("%d to the power of %d =%d\n", nb[4], power1, ft_iterative_power(nb[4], power1)); //0
    printf("%d to the power of %d =%d\n", nb[0], power2, ft_iterative_power(nb[0], power2)); // 1
    printf("%d to the power of %d =%d\n", nb[1], power1, ft_iterative_power(nb[1], power1)); //0
    printf("%d to the power of %d =%d\n", nb[1], power2, ft_iterative_power(nb[1], power2)); // 1
    printf("%d to the power of %d =%d\n", nb[2], power3, ft_iterative_power(nb[2], power3)); //0
    printf("%d to the power of %d =%d\n", nb[3], power3, ft_iterative_power(nb[3], power3)); //243
    
}
