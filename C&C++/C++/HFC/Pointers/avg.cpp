//C++ Program to print average of entered array

#include<iostream>
#include<stdlib.h>
using namespace std;


float average(float *num, float size)
{
    float sum = 0, avg;
    for (int i = 0; i < size; i++)
    {
        sum = num[i] + sum;
    }

    avg = sum/size;    
    return avg;
}

int main()
{
    system("cls");
    float avg, num[600];
    int n;

    cout<<"Total number of terms:- \n";
    cin>>n;

    cout<<"Enter the temrs:-\n";
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }

    avg = average(num, n);
    cout<<"Average is:- "<<avg;

}
