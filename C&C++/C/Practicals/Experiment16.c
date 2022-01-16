/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to display matrix multiplication.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
   system("cls");
   int a[20][20], b[20][20], mul[20][20], row, col;
   printf("Enter total number of rows:-\n");
   scanf("%d", &row);
   printf("Enter total number of coloums:-\n");
   scanf("%d", &col);

   //first Matrix
   printf("Enter the 1st matrix:-\n");
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         scanf("%d", &a[i][j]);
      }
      
   }
   
   //2nd Matrix
   printf("\nEnter the 2nd Matrix\n");
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         scanf("%d", &b[i][j]);
      }
      
   }
   
   //Multiplication
   printf("\nMultiplication of the given matrix is:-\n");
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         mul[i][j] = 0;
         for (int k = 0; k < col; k++)
         {
            mul[i][j] += a[i][k]*b[k][j];
         }

      }

   }

   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         printf("%d\t", mul[i][j]);
      }
      printf("\n");
      
   }
   
   return 0;
}