/*
Write a program to sum first ten natural numbers using while loop.
Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
*/

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum += i;
    // }

    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("The sum of the number is %d\n", sum);
    return 0;
}