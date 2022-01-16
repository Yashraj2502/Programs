//C++ program for division in constructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class divide
{
private:
    float c;

public:
    divide(float a, float b);
};

divide::divide(float a, float b)
{
    c = a / b;
    cout<<"Division of the given 2 number is:- "<<c;
}

int main()
{
    system("cls");
    float x, y;
    cout<<"Enter 2 numbers:-\n";
    cin>>x>>y;

    divide div(x , y);

    return 0;
}