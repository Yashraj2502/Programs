//String Manipulation using empty() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    string str1 = "Help for coders.";
    string str2;

    if (str1.empty())
    {
        cout<<"String is empty";
    }
    else
    {
        cout<<"String is not empty";
    }

    if (str2.empty())
    {
        cout<<"\nString is empty";
    }
    else
    {
        cout<<"\nString is not empty";
    }
    
    return 0;
}