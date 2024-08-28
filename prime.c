#include <stdio.h>

int main()
{
    int value, isPrime = 1;
    printf("Enter the number: ");
    scanf("%d", &value);
    if (value <= 1)
    {
        isPrime = 0;
    }
    else
    {

        for (int i = 2; i <= value / 2; i++)
        {
            if (value % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("%d is a Prime Number\n", value);
    }
    else
    {
        printf("%d is not a prime number\n", value);
    }
    return 0;
}