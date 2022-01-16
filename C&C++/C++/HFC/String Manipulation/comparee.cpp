//String Manipulation using compare() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    string str1 = "Windows 10";
    string str2 = "Windows 11";

    int cmp = str1.compare(str2);

    if (cmp == 0)
        cout<<"Both the strings are the same";
    
    else
        cout<<"Both the strings are not equal";
    
    return 0;
}