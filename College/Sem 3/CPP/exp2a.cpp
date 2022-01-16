//Yash Alapuria
//Roll no.:- 01
//Experiment 2a

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    int num1 = 0, num2 = 1, sum = 0, n;
    cout<<"Total number of terms in the sequence?\n";
    cin>>n;
    cout<<sum<<" "<<num2<<" ";

    for (int i = 0; i < n-2; ++i)
    {
        sum = num1 + num2;
        cout<<sum<<" ";
        num1 = num2;
        num2 = sum;
    }
    
    return 0;
}