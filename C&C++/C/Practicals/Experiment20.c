/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program for swapping the data using pointers.*/

//#include<stdio.h>

int main(){
   float x, y, *m, *n, temp;

   printf("Enter 2 numbers:-\n");
   scanf("%f%f", &x, &y);

   printf("Before swapping:- \nx = %.3f,\ty = %.3f\n", x, y);

   m = &x;
   n = &y;

   temp = *n;
   *n = *m;
   *m = temp;

   printf("After swapping:-\nx = %.3f,\ty = %.3f\n", x, y);
   //return 0;
}