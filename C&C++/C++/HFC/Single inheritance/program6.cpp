//C++ basing single inheritance program

#include <iostream>
#include<stdlib.h>
using namespace std;

class First
{
    public:
    void display()
        {
            cout<<"This display is inside the first class" << endl;
        }
};

class Second: public First
{
    public: 
    void display()
        {
            cout<<"This show is inside the second class which is derived from parent class" << endl;
        }
};

int main()
{
    system("cls");

    First f;
    f.display();
    Second s;
    s.display();
    
    return 0;
}