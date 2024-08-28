// Write a function and pass the value by reference.

#include <stdio.h>

int sum(int *, int *);
int sum(int *a, int *b)
{
    *a = 34, *b = 342;
    return (*a + *b);
}

int main()
{
    int x = 5, y = 6;
    printf("The sum is %d", sum(&x, &y));
    return 0;
}
