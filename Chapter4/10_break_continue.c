#include <stdio.h>

int main()
{
    for (int i = 0; i <= 15; i++)
    {
        if (i == 5)
        {
            // break; => Exit the loop now!
            continue; // skip the iteration now
        }
        printf("%d\n", i);
    }
    return 0;
}