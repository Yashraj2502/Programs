//C++ program for showing info of 1 player using single inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

class sports
{
public:
    string sptName = "vollyball";
};

class player : public sports
{
    public:
        string plyName = "Hinata Shoyo";
        int plyAge = 18;
        int yrsExp = 6;
};

int main(void)
{
    system("cls");

    player obj1;
    cout<<"Information of the player:-\n";
    cout<<"Name of the player:- "<<obj1.plyName;
    cout<<"\nSports played:- "<<obj1.sptName;
    cout<<"\nAge of the player:- "<<obj1.plyAge;
    cout<<"\nYears of Experience:- "<<obj1.yrsExp;

    return 0;
}