/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- Program to reverse a number using function.*/

#include<stdio.h>

int findRev(int num){
   int sum = 0;

   while (num != 0)
   {
      sum = sum*10 + num%10;
      num = num/10;
   }
   return sum;
}

int main(){
   int num, rev; 

   printf("Enter an integar:-\n");
   scanf("%d", &num);

   rev = findRev(num);
   printf("The reverse of the entered number is:- %d", rev);

   return 0;
}