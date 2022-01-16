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
}emp[2];

int main()
{
   system("cls");
   printf("Enter employee information:-\n");
   for (int i = 0; i < 2; i++)
   {
      printf("\nEmployee %d\n", i+1);
      printf("Name:- ");
      scanf("%s", &emp[i].name);
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
   for (int i = 0; i < 2; i++)
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


/*
int main()
{
    system("cls");
    int n, n1, n2, fib; 
    printf("Yash Alapuria\n");
    printf("Roll no.:- 01\nDiv - A\n");
    printf("Enter total number of elements:-\n");
    scanf("%d", &n);
    n1 = 0; 
    n2 = 1;
    printf("%d, %d", n1, n2);
    for (int i = 2; i <= n; i++)
    {
        fib = n1+n2;
        printf(", %d", fib);
        n1 = n2;
        n2 = fib;
    }
    
    return 0;
}*/