#include <stdio.h>

int main()
{
    int a = 3;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}