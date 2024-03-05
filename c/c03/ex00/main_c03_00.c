#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main()
{
	char s1[] = "hello";
    char s2[] = "hello";
	char s3[] = "abcd";
    char s4[] = "abcDd";
    char s5[] = "12345";
    char s6[] = "123456";

    printf("system strcmp(s1, s2) = %d\n", strcmp(s1, s2));
    printf("my own strcmp(s1, s2) = %d\n\n", ft_strcmp(s1, s2));
    
    printf("system strcmp(s3, s4) = %d\n", strcmp(s3, s4));
    printf("my own strcmp(s3, s4) = %d\n\n", ft_strcmp(s3, s4));

    printf("system strcmp(s5, s6) = %d\n", strcmp(s5, s6));
    printf("my own strcmp(s5, s6) = %d\n\n", ft_strcmp(s5, s6));
    return 0;
}
