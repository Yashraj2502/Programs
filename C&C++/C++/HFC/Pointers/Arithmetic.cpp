//C++ program for performing arithmetic operation using pointers.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    float x, y, add, sub, mul, div;

    cout<<"Enter 2 numbers:-\n";
    cin>>x>>y;

    float*p = &x;
    float*q = &y;

    add = (*p)+(*q);
    sub = (*p)-(*q);
    mul = (*p)*(*q);
    div = (*p)/(*q);

    cout<<"Addition:- "<<add<<endl;
    cout<<"Subtraction:- "<<sub<<endl;
    cout<<"Multiplication:- "<<mul<<endl;
    cout<<"Division:- "<<div;
}