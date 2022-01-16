//C++ program for swapping 2 numbers without using 3rd variable
//Yash Alapuria

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(void)
{
    system("cls");

    float a, b;
    cout<<"Enter 2 number\n";
    cin>>a>>b;
    cout<<"Before swapping\na = "<<a<<"\tb = "<<b;

    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"\nAfter swapping\na = "<<a<<"\tb = "<<b;

    return 0;
}