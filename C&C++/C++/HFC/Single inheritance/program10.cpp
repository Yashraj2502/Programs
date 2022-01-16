//C++ program for calculating compound interest 

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

/*
P = A / (1 + r/n)^nt
    A	=	final amount
    P	=	initial principal balance
    r	=	annual interest rate
    t	=	time (in years)
    n   =   compounding frequency

*/

class input
{
    public:
        double A, P, r, t, n, base, power, value;
        double calc()
        {   
            power = n * t;
            base = (1 + (r / n));
            value = pow(base, power);
            cout<<"Value "<<value;
            P = A/value;
            
            return P;
        }
};

class output : public input
{
    public:
        float display()
        {
            float result = calc();  
            std::cout <<"\nPrincipal amount :- "<<result<< std::endl;
        }
};

int main(void)
{
    system("cls");

    cout<<"Calculating Final Amount for Simple interest.\n";
    output obj1;
    cout<<"Final Amount :- ";
    cin>>obj1.A;
    cout<<"Annual interest rate :- ";
    cin>>obj1.r;
    cout<<"Time (in years) :- ";
    cin>>obj1.t;
    cout<<"Compounding frequency :- ";
    cin>>obj1.n;
    obj1.display();

    return 0;
}