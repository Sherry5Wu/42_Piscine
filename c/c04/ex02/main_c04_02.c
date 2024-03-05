#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
    int i;
    int j;
    int k;
    int l;
    int m;
    
    i = 9;
    l = 10;
    m = 0;
    j = -2147483648;
    k = 2147483647;
    ft_putnbr(i);
    write(1 , "\n", 1);
    ft_putnbr(l);
    write(1 , "\n", 1);
    ft_putnbr(m);
    write(1 , "\n", 1);
    ft_putnbr(j);
    write(1 , "\n", 1);
    ft_putnbr(k);
    return (0);
}
