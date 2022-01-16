/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to calculate the value of z = x^y using recursion function.*/

#include<stdio.h>

int power(int base, int a)
{
   if (a != 0)
   {
      return (base*power(base, a-1));
   }

   else
   {
      return 1;
   }
}

int main()
{
   int base, a, res;

   printf("Enter the base number:-\n");
   scanf("%d", &base);
   printf("Enter the power number:-\n");
   scanf("%d", &a);

   res = power(base, a);

   printf("%d^%d = %d", base, a, res);

   return 0;
}