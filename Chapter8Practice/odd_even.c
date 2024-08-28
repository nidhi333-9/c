#include <stdio.h>

int main()
{

    int a;
    printf("Enter the number: ");

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("It's a even number");
    }
    else
    {
        printf("It's an odd number");
    }
    return 0;
}