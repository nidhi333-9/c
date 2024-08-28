#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = "Harry";
    char a1[56] = "Harry";
    char a2[56] = "Bhai";
    // sprintf("%d", strlen(st));
    //  char source[] = "harry";
    char target[30];
    strcpy(target, st);
    printf("%s %s \n", st, target);
    strcat(a1, a2);
    printf("%s \n", a1);

    int a = strcmp("deep", "joke"); // The the sign according to ASCII value (DJ is negative)
    printf("%d \n", a);
    return 0;
}