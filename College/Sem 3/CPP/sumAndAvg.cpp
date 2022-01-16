//Yash Alapuria
//Roll no.:- 01
//Experiment 6b

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    float num1, num2, num3, sum, avg;
    cout<<"Enter 3 numbers.\n";
    cin>>num1>>num2>>num3;

    sum = num1 + num2 + num3;
    avg = sum / 3;

    cout<<"Sum of given 3 values is:- "<<sum;
    cout<<"\nAverage of given 3 values is:- "<<avg;
    return 0;
}