// Repeat problem 3 for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{
    int arr[10];
    int t;
    printf("Enter the integer to get the table: \n");
    scanf("%d", &t);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = t * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", t, i + 1, arr[i]);
    }

    return 0;
}