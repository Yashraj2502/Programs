//C++ program for displaying average of 2 given numbers (destructor)

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class number
{
private:
    float x, y, avg;

public:
    number(float num1, float num2);
    int calc();
    int display();
    ~number();
};

number::number(float num1, float num2)
{
    cout<<"Constructor is called.\n";
    x = num1;
    y = num2;
}

number::calc()
{
    avg = (x+y)/2;
}

number::display()
{
    cout<<"\nAverage of the entered number is :- "<<avg;}

number::~number()
{
    cout<<"\nDESTRUCTOR is called.";
}

int main()
{
    system("cls");
    float x, y;
    cout<<"Enter 2 number:-\n";
    cin>>x>>y;
    
    number ag(x, y);
    ag.calc();
    ag.display();

    return 0;
}