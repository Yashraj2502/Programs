//C++ program in which constructor as well as destructor both are called (destructor)

#include<iostream>
#include<stdlib.h>
using namespace std;

class both
{
public:
    both();
    ~both();
};

both::both()
{
    cout<<"CONSTRUCTOR is called.\n";
}

both::~both()
{
    cout<<"DESTRUCTOR is called.";
}

int main()
{
    system("cls");
    both h;
    return 0;
}