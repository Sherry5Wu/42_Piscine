#include <stdio.h>
int ft_atoi_base(char *str, char *base);

int main(void)
{
    char str1[20] = "-+--5";
    char str2[20] = "a1245";
    char str3[20] = "  123";
    char str4[20] = "-123";
    
    char binary[3] = "01";
    char octal[9] = "poneyvif";
    char decimal[11] = "0123456789";
    char hexadecimal[17] = "0123456789ABCDEF";
    
    printf("str1+binary=%d\n\n\n",ft_atoi_base(str1, binary));
    printf("str2+octal=%d\n\n\n",ft_atoi_base(str2, octal));
    printf("str3+decimal=%d\n\n\n",ft_atoi_base(str3, decimal));
    printf("str4+hexadecimal=%d\n\n\n",ft_atoi_base(str4, hexadecimal));
    return 0;
}
