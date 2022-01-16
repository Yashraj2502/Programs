/*C++ program to print WELCOME TO HFC!!! */

#include<iostream>
#include<stdlib.h>
using namespace std;

class print
{    
public:
    static void show(void)
    {
        cout<<"Welcome to HFC!!!";
    }
};

int main(void)
{
    system("cls");
    print::show();
    return 0;
}