#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    int oper[] = {1, 2, 3, 4};
    int num;
    printf("Choose the operator: ");
    scanf("%d", &num);
    if (num == oper[0])
    {
        printf("The result is %d", a + b);
        // return a + b;
    }
    else if (num == oper[1])
    {
        printf("The result is %d", a - b);
        // return a - b;
    }
    else if (num == oper[2])
    {
        printf("The result is %d", a * b);
        // return a * b;
    }
    else if (num == oper[3])
    {
        if (b == 0)
        {
            printf("Please enter the valid value of b.");
        }
        printf("The result is %d", a / b);
        // return a / b;
    }
    else
    {
        printf("You are choosing invalid number.");
    }
    return 0;
}