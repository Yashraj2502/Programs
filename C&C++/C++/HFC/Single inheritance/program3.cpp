//C++ program for taking I/P of "n" playes using single inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

class sports
{
public:
    std::string sptName;
};

class player : public sports
{
public:
    std::string plyName;
    int plyAge;
};

int main(void)
{
    system("cls");
    int n;

    player obj1;
    cout<<"Total number of player?\n";
    cin>>n;
    cout<<"Please input the information of the players:-\n";
    for (int i = 1; i < n+1; i++)
    {
        cout<<"\nPlayer - "<<i<<endl;
        cout<<"Which sports does the player play?\n"; 
        //std::getline(std::cin, obj1.sptName);  
        cin>>obj1.sptName;    
        cout<<"Name of the player?\n";
        //std::getline(std::cin, obj1.plyName);
        cin>>obj1.plyName;
        cout<<"Age of the player?\n";
        cin>>obj1.plyAge;
    }
    
    return 0;
}