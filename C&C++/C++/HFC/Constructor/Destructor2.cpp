//C++ program for fibonacci with recursion

#include<iostream>
#include<stdlib.h>
using namespace std;

class Fibonacci
{
private:
    float number;

public:
    Fibonacci(float num)
    {
        number = num;
    }

    float calc()
    {
        if (number <= 1)
        {
            return number;
        }
        
        else
        {
            return (Fibonacci(number-1)+Fibonacci(number-2));
        }
    }

    float display()
    {
        for (int i = 0; i < number; i++)
        {
            cout<<Fibonacci(i)<<"\t";
        }
        
    }

    ~Fibonacci()
    {
        cout<<"DESTRUCTOR is called.";
    }
};

int main()
{
    system("cls");
    float num;
    cout<<"Total number of terms?\n";
    cin>>num;

    Fibonacci pf(num);
    pf.calc();
    pf.display();

    return 0;
}