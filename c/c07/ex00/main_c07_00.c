#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
    char *stra;
    char *strb;
    char *pa;
    char *pb;
    
    stra = "Hello Sherry!";
    strb = "Ni hao ma?";
    pa = ft_strdup(stra);
    pb = ft_strdup(strb);
    printf("stra=%s\n",stra);
    printf("strb=%s\n",strb);
    printf("pa=%s\n",pa);
    printf("pb=%s\n",pb);
    return (0);
}
