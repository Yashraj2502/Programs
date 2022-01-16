//C++ program to call & increment COUNT 3 times. 

#include<iostream>
#include<stdlib.h>
using namespace std;

class Class
{
public:
    static int count;
    Class();
};

Class::Class()
{
    count++;
}

int Class::count = 0;

int main(void)
{
    system("cls");

    cout<<"Initial value of count:- "<<Class::count;

    Class obj1, obj2, obj3;
    cout<<"\nCount value after 3 objects:- "<<Class::count;

    return 0;
}