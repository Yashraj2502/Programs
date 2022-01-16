//C++ program for geometric program 

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

/*
finite series of a GP
int main(void)
{
    system("cls");
    float a, r, n;
    cout<<"Enter 1st term:-\n";
    cin>>a;
    cout<<"Enter common ratio:-\n";
    cin>>r;
    cout<<"Total number of terms:-\n";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        
        float GP = a * pow(r, i - 1);
        cout<<"The "<< i <<"th term of the series is:- "<< GP <<endl;
    }
    
    return 0;
}
*/

/*
Infinite(∞) GP series */
int main(void)
{
    system("cls");
    float a, r, n,Sn;
    cout<<"Enter 1st term:-\n";
    cin>>a;
    cout<<"Enter common ratio:-\n";
    cin>>r;

    if (r < 1)
    {
        Sn = a / (1 - r);
        cout<<"Infinite series (S∞) = "<<Sn;
    }
    
    else if (r == 1)
    {
        //Sn = ∞;
        cout<<"Infinite series (S∞) = ∞";
    }
    
    else
    {
        cout<<"Series does not converge and it has no sum.";
    }
    
}