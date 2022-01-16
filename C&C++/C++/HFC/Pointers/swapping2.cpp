//C++ program for passing pointer as argument

#include<iostream>
#include<stdlib.h>
using namespace std;

float value(float*x)
{
    *x = 0;
    return *x;
}

int main()
{
    system("cls");
    float x;

    cout<<"Enter a number:-\n";
    cin>>x;

    cout<<"Before calling the function:- "<<x<<endl;

    value(&x);
    cout<<"After calling the function:- "<<x;
}

