//String Manipulation using strcat() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    char str1[50], str2[50];

    strcpy(str1, "Windows 11 ");
    strcpy(str2, "is here");

    strcat(str1, str2);

    cout<<str1;

    return 0;
}