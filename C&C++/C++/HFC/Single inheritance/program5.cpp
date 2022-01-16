//C++ program for single inheritance
//Program to show basic detail abt sports & no. of players with there position

#include <iostream>
#include <stdlib.h>
using namespace std;

class sports
{
public:
    string sptName;

    void input()
    {
        cout << "Which sports information do you want?\n";
        cout << "1. Vollyball\n2. Football\n3. Cricket\n4. Hockey\n5. Basketball\n";
        cin >> sptName;
    }
};

class players : public sports
{
public:
    sports obj1;
    void display()
    {
        if (sptName == "Vollyball")
        {
            cout<<"\nThis is Vollyball";
            cout<<"\nTotal number of players required on court are 6.\n";
            cout<<"\nThey are:- \nA Sitter \n2 Centre blockers \n2 Receiver - Hitters  \n& a Universal Spiker.";
        }

        else if (sptName == "Football")
        {
            cout<<"\nThis is Football";
            cout<<"\nTotal number of players required on field are 11.\nA match may not start or continue if either team has fewer than seven players.\n";
            cout<<"\nThey are:- \nA Goalkeeper \n1 Right Back \n1 Left Back  \n2 Centre back\n1 Central Defensive/Holding Midfielder\n1 Right Attacking Midfielders/Wingers\n1 Central/Box-to-Box Midfielder\n1 Spiker\n1 Attacking Midfielder/Playmaker\n& 1 Left Attacking Midfielders/Wingers.";
        }

        else if (sptName == "Cricket")
        {
            cout<<"\nThis is Cricket";
            cout<<"\nTotal number of players required on field are 11.\n";
            cout<<"\nThey are:- \nA Wicket-keeper\n1 Slip\n1 Gully\n1 Point\n1 Cover\n1 Third man\n1 Fine leg\n1 Mid-wicket\n1 Mid-off\n1 Square leg\n& A Captain.";
        }

        else if (sptName == "Hockey")
        {
            cout<<"\nThis is Hockey";
            cout<<"\nTotal number of players required on field are 11.\n";
            cout<<"\nThey are:- \nA Goalkeeper\n4 Defenders(right half, left half, right back and left back)\n3 Mid-fielders (inside right, inside left and center half)\n& Strikers.";
        }
        
        else if (sptName == "Basketball")
        {
            cout<<"\nThis is Basketball";
            cout<<"\nTotal number of players required on court are 5.\n";
            cout<<"\nThey are:- \nCenter \nPower forward\nSmall forward\nPoint guard\n& a Shooting guard.";
        }

        else
        {
            cout<<"Wrong Input";
        }
    }
};

int main(void)
{
    system("cls");

    players obj2;
    obj2.input();
    obj2.display();

    return 0;
}