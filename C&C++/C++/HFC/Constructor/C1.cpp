//C++ Program for swapping 2 the value of variable using constructor 
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

class swapping
{
private:
    float x, y;

public:
    swapping(float a, float b)
    {
        float temp;

        temp = a;
        a = b;
        b = temp;

        x = a;
        y = b;
    }

    int getA()
    {
        return x;
    }

    int getB()
    {
        return y;
    }
};

int main()
{
    system("cls");
    float a, b;
    cout<<"Enter 2 numbers:-\n";
    cin>>a>>b;

    cout<<"Numbers before swapping:- \na = "<<a<<"\nb = "<<b;

    //Calling the constructor & swapping the terms
    swapping p(a, b);

    cout<<"\nNumbers after swapping:-\na = "<<p.getA()<<"\nb = "<<p.getB();
    return 0;
}*/

# include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}