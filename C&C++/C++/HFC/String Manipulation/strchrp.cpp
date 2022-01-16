//String Manipulation using strchr() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    char str[] = "Help for coders.";
    char* chr = strchr(str, 'p');

    cout<< chr - str + 1;

    return 0;
}