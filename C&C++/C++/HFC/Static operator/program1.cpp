//C++ program to increment COUNT whenever called from the user.

#include<iostream>
#include<stdlib.h>
using namespace std;

class Class
{   
public:

    static int count;
    Class();
};

int Class::count = 0;

Class::Class()
{
    count++;
}

int main(void)
{
    system("cls");

    cout<<"Initial value of count:- "<<Class::count<<endl;

    int x, i=0;
    cout<<"How many times object is to be called?\n";
    cin>>x;
    /*
    while (i < x)
    {
        Class obj[i];
        //cout<<"Value of count after object is initialized:- "<<Class::count<<endl;
        i++;
    }
    
    cout<<"Value of count after object is initialized:- "<<Class::count;*/

    Class obj[x];
    cout<<"Value of count after object is initialized:- "<<Class::count;

    return 0;
}