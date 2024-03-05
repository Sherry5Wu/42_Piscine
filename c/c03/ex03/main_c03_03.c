#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

//int main(int argc, char *argv[])
//{
//    if (argc == 3)
//    {
//        printf("dest= %s\n", argv[1]);
//        printf("src= %s\n", argv[2]);
//        printf("OWN src to dest= %s\n", ft_strcat(argv[1],argv[2]));
//        printf("SYSTEM src to dest= %s\n", strcat(argv[1],argv[2]));
//    }
//    return 0;
//}

int main(void)
{
    char dest1[50] = "hello";
    char dest2[50] = "hello";
    char src[10] = " world";

    char dest3[50] = "This is a ";
    char dest4[50] = "This is a ";
    char src1[] = "small world";

    printf("OWN src to dest= %s\n", ft_strncat(dest1, src, 3));
    printf("SYSTEM src to dest= %s\n\n", strncat(dest2, src, 3));

    printf("OWN src to dest= %s\n", ft_strncat(dest3, src1, 6));
    printf("SYSTEM src to dest= %s\n\n", strncat(dest4, src1, 6));
}
