// Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to get its table: ");
    scanf("%d", &n);
    printf("The table of %d\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, n, i * n);
    }
    return 0;
}
