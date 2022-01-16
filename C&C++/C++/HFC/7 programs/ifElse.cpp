//C++ program for if-else statement 
//C++ program to check if a person is adult or underage

#include<iostream>
#include<stdlib.h>
using namespace std;
/*
int main(void)
{
    system("cls");
    float num;
    cout<<"Enter the age of a person:-\n";
    cin>>num;

    if (num >= 18)
    {
        cout<<"Person is in adulthood phase.";
    }

    else
    {
        cout<<"Person is in childhood phase.";
    }
    
}*/

int main(void)
{
    system("cls");
    float num;
    cout<<"Enter the age of a person:-\n";
    cin>>num;

    if (num >= 18)
    {
        cout<<"Person is in adulthood phase.";
    }

    else if (18 < num || num >12)
    {
        cout<<"Person is in teenagehood.";
    }
    
    else
    {
        cout<<"Person is in childhood phase.";
    }
    
}