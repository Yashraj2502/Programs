//String Manipulation using empty() & erase() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    string str = "Help for coders.";

    if (str.empty())
    {
        cout<<"String is empty";
    }
    else
    {
        cout<<"String is not empty";
    }
    
    //using erase
    str.erase();
    cout<<"\n\nerase() is used/called.";
    if (str.empty())
    {
        cout<<"\nString is empty";
    }
    else
    {
        cout<<"\nString is not empty";
    }

    return 0;
}