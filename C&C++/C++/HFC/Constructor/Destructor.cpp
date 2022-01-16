//C++ Program for finding if given number is Armstrong or not. (Destructor)

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class Armstrong
{
private:
    int num, r, sum, temp;

public:
    Armstrong(int num)
    {
        temp = num;
        sum = 0;

        while (num > 0)
        {
            r = num % 10;
            sum = sum + (r*r*r);
            num = num / 10;
        }
    
    }

    int display()
    {
        if (temp == sum)
        {
            cout<<"\nGiven number is ARMSTRONG NUMBER.\n";
        }
    
        else
        {
            cout<<"\nGiven number is NOT an ARMSTRONG NUMBER.\n";
        }
    
    }

    ~Armstrong()
    {
        cout<<"DESTRUCTOR is called.";
    }
};

int main()
{
    system("cls");
    int number;
    cout<<"Enter a number:-\n";
    cin>>number;

    Armstrong am(number);
    am.display();
    return 0;
}