#include <stdio.h>
int ft_recursive_factorial(int nb);

int main(void)
{
    int array[10] = {-1, 1, 2 ,5 , 6, 8, 25};

    for (int i = 0; i < 7; i++)
        printf("factorial %d=%d\n", array[i], ft_recursive_factorial(array[i]));
    return 0;
}
