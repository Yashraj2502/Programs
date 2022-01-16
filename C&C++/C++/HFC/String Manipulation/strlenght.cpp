//String Manipulation using strlen() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    char str[50] = "Help for coders!!!";

    int len = strlen(str);

    cout<<"Lenght of the string is:- "<<len;

    return 0;
}