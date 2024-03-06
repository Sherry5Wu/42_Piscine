#include "ft_stock_str.h"
#include "../ex04/ft_strs_to_tab.c"

void ft_show_tab(struct s_stock_str *par);

int main(int ac, char **av)
{
    ft_show_tab(ft_strs_to_tab(ac, av));
    return (0);
}
