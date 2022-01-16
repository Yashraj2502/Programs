//C++ program to print address of the integral number.

#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    int*p, num;

    cout<<"Enter a number:-\n";
    cin>>num;

    p = &num;
    cout<<"Address of entered number is:- "<<p;
}