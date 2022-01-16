//C program for if-else statement 
//C program to check if a person is adult or underage

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    system("cls");
    int num;
    printf("Enter the age of a person:-\n");
    scanf("%d", &num);

    if (num >= 18)
    {
        printf("Person is in adulthood phase.");
    }
    
    else if (18 < num || num >12)
    {
        printf("Person is in teenagehood.");
    }
    
    else
    {
        printf("Person is in childhood phase.");
    }
    
}

/*
int main(void)
{
    system("cls");
    int num;
    printf("Enter the age of a person:-\n");
    scanf("%d", &num);

    if (num >= 18)
    {
        printf("Person is in adulthood phase.");
    }
    
    else
    {
        printf("Person is in childhood phase.");
    }
    
}
*/