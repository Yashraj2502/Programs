//C++ program to find gcd using copy constructor 

#include<iostream>
#include<stdlib.h>
using namespace std;

class GCD
{
private:
    float x, y;

public:
    GCD(float num1, float num2);
    GCD(const GCD &in);
};

GCD::GCD(float num1, float num2)
{
    num1 = x;
    num2 = y;
}

GCD::GCD

int main()
{
    system("cls");
    float a, b;
    cout<<"Enter 2 numbers:-\n";
    cin>>a>>b;

    GCD in(a, b);
    GCD calc()

    return 0;
}