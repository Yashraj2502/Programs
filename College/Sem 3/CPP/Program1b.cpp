//C++ program for showing sum and avg for 3 numbers
//Yash Alapuria

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(void)
{
    system("cls");

    float sum, avg, a, b, c;
    cout<<"Enter 3 numbers\n";
    cin>>a>>b>>c;

    sum = a + b + c;
    avg = (sum) / 3;

    cout<<"Sum of given 3 numbers is:- "<<sum;
    cout<<"\nAverage of given 3 numbers is:- "<<avg;

    return 0;
}