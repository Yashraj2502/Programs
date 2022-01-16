//C++ program to perfrom sum of an array using pointers.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    float num[1000], sum;
    int n;
    sum = 0;

    cout<<"Enter total number of terms:-\n";
    cin>>n;

    cout<<"Enter the value of the elements:-\n";
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        float*pt = &num[i];
        sum = sum+(*pt);
    }

    cout<<"Sum of the elements:- "<<sum;
}