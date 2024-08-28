#include <stdio.h>

int main()
{
    int r;
    int height = 10;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("The area of the circle is %f", 3.14 * r * r);
    printf("The volume of the cylinder is %f", 3.14 * r * r * height);
    return 0;
}