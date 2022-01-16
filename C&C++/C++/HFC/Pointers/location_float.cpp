//C++ program to print address of the decimal number.

#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    float*p, num;

    cout<<"Enter a number:-\n";
    cin>>num;

    p = &num;
    cout<<"Address of entered number is:- "<<p;
}