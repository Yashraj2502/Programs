//C++ program for displaying entered numbers (destructor)

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class number
{
private:
    float x, y;

public:
    number(float num1, float num2)
    {
        cout<<"Constructor is called.\n";
        x = num1;
        y = num2;
    }

    int display()
    {
        cout<<"\nEntered numbers are:-\nnum1 = "<<x<<"\nnum2 = "<<y;
    }

    ~number()
    {
        cout<<"\n\nDESTRUCTOR is called.";
    }
};


int main()
{
    system("cls");
    float x, y;
    cout<<"Enter 2 number:-\n";
    cin>>x>>y;
    
    number ag(x, y);
    ag.display();

    return 0;
}