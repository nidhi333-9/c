// 2.Write a Program to check whether a number is prime or not.

#include <stdio.h>

int isPrime(int n)
{
   if (a == 0 || a == 1)
      printf("Not a Prime");
   if (a <= 3)
      printf("Prime Number");

   for (int i = 5; i * i < a / 2; i += 6)
   {
      if (a % i == 0 || a % (i + 2) == 0)
         return 0;
   }
}
int main()
{
   int a;

   printf("Enter the number: ");
   scanf("%d", &a);

   return 0;
}