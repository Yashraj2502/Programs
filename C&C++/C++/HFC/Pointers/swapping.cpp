//C++ program for swapping(call by value) the values of 2 number using pointer

#include<iostream>
#include<stdlib.h>
using namespace std;

float swap(float *a, float *b)
{
    float*pt = a;
    a = b;
    b = pt;
}

int main()
{
    system("cls");
    float x, y, a, b;
    cout<<"Enter 2 nubers:-\n";
    cin>>x>>y;
    
    cout<<"Before Swapping:-\n";
    cout<<"x = "<<x<<"\ny= "<<y<< endl;

    swap(&x,&y);

    cout<<"After Swapping:-\n";
    cout<<"x = "<<x<<"\ny= "<<y<< endl;
}