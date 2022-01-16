//String Manipulation using strstr() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    char str1[] = "Windows 11 ";
    char str2[] = "is here";
    char* p;

    p = strstr(str1, str2);
    
    if (p)
    {
        cout<<"String found\n";
        cout<<"First Occurence:- "<<p;
    }
    else
    {
        cout<<"string not found";
    }
    
    return 0;
}