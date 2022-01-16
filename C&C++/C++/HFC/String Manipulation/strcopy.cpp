//String Manipulation using strcpy() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    char str1[30], str2[30];

    //copying the string "Windows 11" to the str1
    strcpy(str1, "Windows 11");
    cout<<"String 1: "<<str1;

    //copying the string "Windows 10" to the str2
    strcpy(str2, "Windows 10");
    cout<<"\nString 2: "<<str2;

    //copying the value of str2 to the string str1
    strcpy(str1, str2);
    cout<<"\nString 1: "<<str1;

    return 0;
}