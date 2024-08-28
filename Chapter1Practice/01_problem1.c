#include <stdio.h>
int main()
{
    // int length = 10;
    // int breadth = 30;
    int length;
    int breadth;

    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter breadth:");
    scanf("%d", &breadth);
    printf("The area of the rectangle is %d", length * breadth);
    return 0;
}