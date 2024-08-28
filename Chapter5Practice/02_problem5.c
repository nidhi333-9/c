// Write a function to convert Celsius temperature into Fahrenheit

#include <stdio.h>

float c2f(int);

float c2f(int c)
{
    return 1.8 * c + 32;
}
int main()
{
    int temp = 100;
    printf("%.2f", c2f(temp));
    return 0;
}