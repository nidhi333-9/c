// Write a program using recursion to calculate nth element of Fibonacci series

#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

int fabonacci(int);
int fabonacci(int n)
{

    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fabonacci(n - 1) + fabonacci(n - 2);
}
int main()
{
    int a = 4;
    printf("The value of fabonacci series at %d is %d", a, fabonacci(a));
    return 0;
}