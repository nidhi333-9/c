#include <stdio.h>

int main()
{
    int marks[5];
    // scanf("%d", &marks[0]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    // printf("Marks is %d %d %d", marks[0], marks[1], marks[2]);
    for (int i = 0; i < 5; i++)
    {
        printf("The value of markds at index %d is %u\n", i, &marks[i]);
    }
    return 0;
}