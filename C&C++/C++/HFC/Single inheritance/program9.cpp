//C++ program for calculating simple interest 

#include<iostream>
#include<stdlib.h>
using namespace std;
/*
A = P (1 + rt)
    A	=	final amount
    P	=	initial principal balance
    r	=	annual interest rate
    t	=	time (in years)
*/

class input
{
    public:
        double A, P, r, t;
        double calc()
        {
            A = P * (1 + (r * t) );
            return A;
        }
};

class output : public input
{
    public:
        float display()
        {
            float result = calc();  
            std::cout <<"\nFinal amount :- "<<result<< std::endl;
        }
};

int main(void)
{
    system("cls");

    cout<<"Calculating Final Amount for Simple interest.\n";
    output obj1;
    cout<<"Initial principal balance :- ";
    cin>>obj1.P;
    cout<<"Annual interest rate :- ";
    cin>>obj1.r;
    cout<<"Time (in years) :- ";
    cin>>obj1.t;
    obj1.display();

    return 0;
}