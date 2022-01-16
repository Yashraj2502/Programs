//C++ program for addition in constructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class add
{
private:
    float c;

public:
    add(float a, float b);
};

add::add(float a, float b)
{
    c = a + b;
    cout<<"Sum of the given 2 number is:- "<<c;
}

int main()
{
    system("cls");
    float x, y;
    cout<<"Enter 2 numbers:-\n";
    cin>>x>>y;

    add sum(x, y);

    return 0;
}