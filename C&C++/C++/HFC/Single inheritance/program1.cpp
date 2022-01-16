/*C++ program on taking i/p of 1 player using single inheritance*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class sports
{
private:
    /* data */
public:
    std::string sptName;   
};

class player : public sports
{
private:
    /* data */
public:
    std::string plyName;
    int plyAge;
};

int main(void)
{
    system("cls");

    player obj1;
    cout<<"Which sports does the player play?\n"; 
    std::getline(std::cin, obj1.sptName);      
    cout<<"Name of the player?\n";
    std::getline(std::cin, obj1.plyName);
    cout<<"Age of the player?\n";
    cin>>obj1.plyAge;

    cout<<"\nInformation of the player:-\n";
    cout<<"Name of the player:- "<<obj1.plyName;
    cout<<"\nSports played:- "<<obj1.sptName;
    cout<<"\nAge of the player:- "<<obj1.plyAge;

    return 0;
}