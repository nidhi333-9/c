// Write a program to change the value of a variable to ten times of its current
// value.

#include <stdio.h>
void ten_times(int *);
void ten_times(int *a)
{
    *a = *a * 10;
}
int main()
{
    int x = 5;
    printf("The value of x is %d\n", x);
    ten_times(&x);
    printf("The value of x is %d\n", x);
    return 0;
}