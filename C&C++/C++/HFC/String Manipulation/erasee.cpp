//String Manipulation using erase() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    string str = "Help for coders.";
    cout<<str;
    
    str.erase(str.begin()+10,str.end());
    cout<<endl<<str;

    return 0;
}