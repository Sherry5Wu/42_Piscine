void ft_putnbr_base(int nbr, char *base);
void ft_putchar(char c);

int main() {
    ft_putnbr_base(123, "0123456789"); // Output: 123
    ft_putchar('\n');
    ft_putnbr_base(-123, "01"); // Output: -1111011
    ft_putchar('\n');
    ft_putnbr_base(42, "poneyvif"); // Output: 52
    ft_putchar('\n');
    ft_putnbr_base(255, "0123456789ABCDEF"); // Output: FF
    ft_putchar('\n');
    ft_putnbr_base(10, ""); // Nothing should be displayed (invalid base)
    ft_putchar('\n');
    ft_putnbr_base(10, "01234+56789"); // Nothing should be displayed (invalid base)
    ft_putchar('\n');
    return 0;
}
