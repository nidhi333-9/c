#include <stdio.h>

int main()
{
    int num = 1;
    int x;
    printf("Enter the value of the number:  \n");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        num = num * i;
    }
    printf("%d \n", num);
}