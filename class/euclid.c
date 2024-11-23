#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main()
{
    int num1, num2;
    printf("Enter the two numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf("The gcd of %d %d is %d \n", num1, num2, gcd(num1, num2));

    return 0;
}