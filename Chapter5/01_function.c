#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition

int sum(int x, int y)
{
    // printf("The value of sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;
    // int c = a + b;
    // printf("The sum of %d\n", c);
    int c = sum(a, b); // function call
    printf("%d", c);
    return 0;
}