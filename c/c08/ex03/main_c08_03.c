#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
     point->x = 42;
     point->y = 21;
}
int main(void)
{
    t_point point;
    t_point p;
    
    set_point(&point);
    p.x = 30;
    p.y = 31;
    printf("point.x=%d\n", point.x);
    printf("point.y=%d\n", point.y);
    printf("p.x=%d\n", p.x);
    printf("p.y=%d\n", p.y);
    return (0);
}
