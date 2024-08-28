/*
Write a program to find greatest of four numbers entered by the user.

*/

#include <stdio.h>

int main()
{
    int a = 3, b = 32, c = 324, d = 3221;
    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The greatest of all is %d", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("The greatest of all is %d", d);
    }
    return 0;
}