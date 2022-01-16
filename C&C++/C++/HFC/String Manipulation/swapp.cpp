//String Manipulation using swap() in c++

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    system("cls");
    string str1 = "48k";
    string str2 = "5k";

    cout<<"Before swapping:-\n";
    cout<<"str1 = "<<str1<<"\nstr2 = "<<str2;

    str1.swap(str2); 
    cout<<"\n\nAfter swapping:-\n";
    cout<<"str1 = "<<str1<<"\nstr2 = "<<str2;

    return 0;
}