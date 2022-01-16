//C++ program to print address of N decimal number.

#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    float*p[1000], num[1000], n;

    cout<<"Total number of terms:-\n";
    cin>>n;

    cout<<"Enter the integral values:-\n";
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
        
    }

    for (int i = 0; i < n; i++)
    {
        p[i] = &num[i];
        cout<<"Address of entered number is:- "<<p[i]<<endl;
    }
    
}