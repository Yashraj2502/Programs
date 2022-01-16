//C++ program to print address of the character.

#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    //char ch[100];

    char str1[100];

    cout<<"Enter a number:-\n";
    for (int i = 0; i < 100; i++)
    {
        cin>>str1[i];
    }
    
    
    /*char const* str2 = "xyz";
    char* cp = str1;
    char c = *cp;*/

    char* p = 0;
    for (int i = 0; i < 100; i++)
    {
        p = &str1[i];
    }
    
    

    cout<<"Address of entered number is:- "<<p;
}