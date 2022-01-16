/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to sort the given array in ascending order.    */

#include<stdio.h>

int main(){
   int num[10], n, temp;
   printf("Enter total number of terms:-\n");
   scanf("%d", &n);

   printf("Now, enters the values of each term:-\n");
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &num[i]);
   }
   
   for (int i = 0; i < n; i++)
   {
      for (int j = i+1; j < n; j++)
      {
         if (num[i] > num[j])
         {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
         }
         
      }
      
   }
   printf("Terms after arranging in ascending order:-\n");
   for (int i = 0; i < n; i++)
   {
      printf("%d\n", num[i]);
   }
   
   return 0;
}