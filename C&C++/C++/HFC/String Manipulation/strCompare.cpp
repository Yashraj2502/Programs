//String Manipulation using strcmp() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    char str1 [30] = "Help for coders.";
    char str2 [30] = "Help for coders.";
    char str3 [30] = "help for coders.";
    int compare;

    compare = strcmp(str1, str2);
    cout<<"strcmp for string1 & 2 is:- "<<compare;

    compare = strcmp(str3, str1);
    cout<<"\nstrcmp for string3 & 1 is:- "<<compare;
    
    return 0;
}