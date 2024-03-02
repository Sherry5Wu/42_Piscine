#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
    int *pointer1;
    int *pointer2;
    int val1;
    int val2;
    
    val1 = 13;
    val2 = 35;
    pointer1 = &val1;
    pointer2 = &val2;
    printf(" before we call the function, val1: %d, val2: %d\n", val1, val2);
    ft_swap(pointer1, pointer2);
    printf("val1: %d, val2: %d\n", val1, val2);
    return(0);
}
