//C++ program for calling constructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class construct
{
    public:
        construct()
        {
            cout<<"Congrats, You have successfully called a constructor";
            /*  cout<<"I'm constructor, At your service.";
            */
        }
};

int main()
{
    system("cls");
    construct p;
    return 0;
}