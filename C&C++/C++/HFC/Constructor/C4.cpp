//C++ program for subtraction in constructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class Subtraction
{
private:
    float c;

public:
    Subtraction(float a, float b);
};

Subtraction::Subtraction(float a, float b)
{
    c = a - b;
    cout<<"Difference of the given 2 number is:- "<<c;
}

int main()
{
    system("cls");
    float x, y;
    cout<<"Enter 2 numbers:-\n";
    cin>>x>>y;

    Subtraction sub(x, y);

    return 0;
}