//String Manipulation using end() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    string str = "Help for coders.";

    string::iterator it =str.end();
    cout<<*(it - 1);

    return 0;
}