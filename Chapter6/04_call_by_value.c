#include <stdio.h>

int sum(int, int);
int sum(int a, int b)
{
    a = 4; // sum frunction cannot change x using a because copy of x is provided to sum in a
    return a + b;
}

int main()
{
    int x = 1, y = 5;
    printf("The sum of 1 and 5 is %d\n", sum(x, y));
    return 0;
}