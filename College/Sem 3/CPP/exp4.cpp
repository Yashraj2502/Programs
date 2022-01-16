//Yash Alapuria
//Roll no.:- 01
//Experiment 4

#include<iostream>
#include<stdlib.h>
using namespace std;

class calc
{
private:
    /* data */
public:
    static int add(float a, float b)
    {
        return a+b;
    }

    static int add(float a, float b, float c)
    {
        return a+b+c;
    }
};

int main()
{
    system("cls");
    calc obj;
    cout<<obj.add(4,5)<<endl;
    cout<<obj.add(4,4,4);
    return 0;
}
