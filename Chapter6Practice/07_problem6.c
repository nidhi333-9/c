// Try problem 3 using call by value and verify that it does not change the value of
// the said variable

#include <stdio.h>
void ten_times(int);
void ten_times(int a)
{
    a = a * 10;
}
int main()
{
    int x = 5;
    printf("The value of x is %d\n", x);
    ten_times(x);
    printf("The value of x is %d\n", x);
    return 0;
}