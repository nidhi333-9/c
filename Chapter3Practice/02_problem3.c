/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int phy, chem, maths;

    printf("Enter the Physics Marks: \n");
    scanf("%d", &phy);
    printf("Enter the Chemistry Marks: \n");
    scanf("%d", &chem);
    printf("Enter the Maths Marks: \n");
    scanf("%d", &maths);
    printf("The marks are %d %d and %d", phy, chem, maths);

    if (phy < 33 || chem < 33 || maths < 33)
    {
        printf("You are failed due to less marks in individual subject.");
    }
    else if (phy + chem + maths / 3 < 40)
    {
        printf("You are failed due to less marks in total percentage");
    }
    else
    {
        printf("You are passed");
    }
    return 0;
}