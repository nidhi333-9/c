#include <stdio.h>

// Sum should change the value of x
int sum(int *, int *);
int sum(int *a, int *b)
{
    *a = 8;
    return (*a + *b);
}

int main()
{
    int x = 1, y = 5;
    printf("The sum of 1 and 8 is %d\n", sum(&x, &y));
    return 0;
}