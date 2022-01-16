/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to take input & display information in ascending of order for 10 books .*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book
{
   char title[100], author[100];
   int price, pages;
};

int main(){
   int x;
   system("cls");
   struct book bk[10];
   printf("Enter the Title, Author, prices and pages of 10 book:-\n");

   for (int i = 0; i < 10; i++)
   {
      printf("Record:- %d\n", i+1);
      printf("Title of the book:-\n");
      scanf("%s", &bk[i].title);
      printf("Author of the book:-\n");
      scanf("%s", &bk[i].author);
      printf("Price of the book:-\n");
      scanf("%d", &bk[i].price);
      printf("Total number of pages in the book:-\n");
      scanf("%d", &bk[i].pages);
   }
   
   //Arranging in ascending order
   printf("Records in ascending order of the price:-\n");

   for (int i = 0; i < 10; i++)
   {
      for (int j = i+1; j < 10; j++)
      {
         if (bk[i].price > bk[j].price)
         {
            x = bk[i].price;
            bk[i].price = bk[j].price;
            bk[j].price = x;
         }
         
      }
      
   }

   for (int i = 0; i < 10; i++)
   {
      printf("Record:- %d\n", i+1);
      printf("Title of the book:- %s\n", bk[i].title);
      printf("Author of the book:- %s\n", bk[i].author);
      printf("Price of the book:-%d\n", bk[i].price);
      printf("Total number of pages in the book:- %d\n\n", bk[i].pages);
   }
   
   return 0;
}