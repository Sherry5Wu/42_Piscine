#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str    *ft_strs_to_tab(int ac, char **av);

int main(int ac, char **av)
{
    int i;
    struct s_stock_str *structs;

    structs = ft_strs_to_tab(ac, av);
    i = 0;
    while (i < ac)
    {
        printf("%d\n", i);
        printf("    original : %s\n", structs[i].str);
        printf("      copied : %s\n", structs[i].copy);
        printf("        size : %d\n", structs[i].size);
        i++;
    }
    return (0);
}
