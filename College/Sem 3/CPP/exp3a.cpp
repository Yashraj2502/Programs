//Yash Alapuria
//Roll no.:- 01
//Experiment 3a

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    float num1, num2;
    int op;
    cout<<"Enter 2 numbers.\n";
    cin>>num1>>num2;
    cout<<"What Arithmetic Operation do you want to perform?\n";
    cout<<"1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division.\n";
    cin>>op;

    switch (op)
    {
    case 1:
        cout<<"Addition :- "<<num1+num2;
        break;
    
    case 2:
        cout<<"Subtraction :- "<<num1-num2;
        break;

    case 3:
        cout<<"Multiplication :- "<<num1*num2;
        break;

    case 4:
        cout<<"Division :- "<<num1/num2;
        break;
    
    default:
        cout<<"Worng input.";
        break;
    }
    return 0;
}