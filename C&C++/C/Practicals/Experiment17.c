/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to check if given string is palindrome.*/

#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];
   int ln, flag = 0;

   printf("Enter a string:-\n");
   scanf("%s", &str);

   ln = strlen(str);
   for (int i = 0; i < ln; i++)
   {
      if (str[i] != str[ln-i-1])
      {
         flag = 1;
         break;
      }
      
   }

   if(flag)
   {
      printf("%s is NOT a palindrome.", str);
   }
   
   else
   {
      printf("%s is a palindrome.", str);
   }
   
   return 0;
}