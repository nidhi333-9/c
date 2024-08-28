#include <stdio.h>

int main()
{
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; // Same as char st[] = {'a', 'b', 'c', '\0'};(null character is already available)
    for (int i = 0; i < 3; i++)
    {
        printf("Characters is %c \n", st[i]);
    }

    return 0;
}