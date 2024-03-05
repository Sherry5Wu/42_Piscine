#include <stdio.h>

int main(void)
{
	char str1[] = "HELLO";
	char str2[] = {'H','E','L','L','O','\0','\0'};
    int arr1[] = {1,2,3,4};
	char *str1_p, *str2_p;
    int *arr1_p;
    int len_str1, len_str2;

	str1_p = str1;
	str2_p = str2;
    arr1_p = arr1;
    len_str1 = sizeof(str1) / sizeof(str1[0]);
    len_str2 = sizeof(str2) / sizeof(str2[0]);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("arr1 = %d\n\n", *arr1);
    
    printf("*arr1+1 = %d\n", (*arr1+1));
    printf("arr1[1] = %d\n", arr1[1]);
    printf("*arr1_p+1= %d\n\n", (*arr1_p+1));
    
    printf("*str1_p = %s\n", str1_p);
    printf("*str2_p = %s\n", str2_p);
  
    printf("str1[0] = %c\n", str1[0]);
    printf("str2[0] = %c\n\n", str2[0]);
    
    printf("len_str1 = %d\n", len_str1);
    printf("len_str2 = %d\n\n", len_str2);
    
    printf("str1 compare to str2= %d\n\n", strcmp(str1,str2));
}
