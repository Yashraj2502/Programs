/* Title :- C Program to take input & display information of 10 employee.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct address
{
   char city[50];
   float pin;
};

struct employee
{
   char name[300];
   int sal, id; 
   double phone;
   struct address add;
}emp[10];

int main()
{
   system("cls");
   printf("Enter employee information:-\n");
   for (int i = 0; i < 10; i++)
   {
      printf("\nEmployee %d\n", i+1);
      printf("Name:- ");
      getline(&emp[i].name);
      //scanf("%s", &emp[i].name);
      printf("ID number:- ");
      scanf("%d", &emp[i].id);
      printf("Salary:- ");
      scanf("%d", &emp[i].sal);
      printf("City:- ");
      scanf("%s", &emp[i].add.city);
      printf("Pincode:- ");
      scanf("%f", &emp[i].add.pin);
      printf("Phone no.:- ");
      scanf("%lf", &emp[i].phone);
   }

   //Displaying the records
   printf("\nRecords are:-");
   for (int i = 0; i < 10; i++)
   {
      printf("\n\nEmployee %d\n", i+1);
      printf("Name:- %s", emp[i].name);
      printf("\nID number:- %d", emp[i].id);
      printf("\nSalary:- %d", emp[i].sal);
      printf("\nCity:- %s", emp[i].add.city);
      printf("\nPincode:- %.0f", emp[i].add.pin);
      printf("\nPhone no.:- %.0lf", emp[i].phone);
   }
   
   return 0;
}