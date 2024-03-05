#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char s1[] = "AB";
    char s2[] = "A";
//	char s3[] = "abcd";
//    char s4[] = "abcDd";
//    char s5[] = "12345";
//    char s6[] = "124456";

    printf("system strncmp(s1, s2) = %d\n", strncmp(s1, s2, 2));
    printf("my own strncmp(s1, s2) = %d\n\n", ft_strncmp(s1, s2, 2));
    
//    printf("system strncmp(s3, s4) = %d\n", strncmp(s3, s4, 4));
//    printf("my own strncmp(s3, s4) = %d\n\n", ft_strncmp(s3, s4, 4));
//
//    printf("system strncmp(s5, s6) = %d\n", strncmp(s5, s6, 2));
//    printf("my own strncmp(s5, s6) = %d\n\n", ft_strncmp(s5, s6, 2));
    return 0;
}
