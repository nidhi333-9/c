// 1. Find the largest number among the three numbers.

#include <stdio.h>

int main()
{
    int a = 10, b = 4, c = 6;
    if (a > b && a > c)
    {
        printf("a is the greatest number & the value is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("b is the greatest number & the value is %d", b);
    }
    else
    {
        printf("c is the greatest number & the value is %d", c);
    }
    return 0;
}