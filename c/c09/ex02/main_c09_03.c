#include <unistd.h>

char **ft_split(char *str, char *charset);

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}


int main(int ac, char **av)
{
    char **result;
    int i;

    if (ac == 3)
    {
        i = 0;
        ft_putstr("Given string=");
        ft_putstr(av[1]);
        write(1, "\n", 1);
        ft_putstr("Charset=");
        ft_putstr(av[2]);
        write(1, "\n", 1);
        result = ft_split(av[1], av[2]);
        ft_putstr("split strings=\n");
        while (result[i])
        {
            ft_putstr(result[i]);
            write(1, "\n", 1);
            i++;
        }
      }
    return (0);
}
