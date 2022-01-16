//C++ program to calculate the area of a wall (Constructor)

#include<iostream>
#include<stdlib.h>
using namespace std;

class Area
{
    public:
    float length, breadth, areaWall;

    Area(float l, float b)
    {
        length = l;
        breadth = b;
        areaWall = length * breadth;
    }

    void display()
    {
        cout<<"Area of the Wall is:- "<<areaWall;
    }
};

int main(void)
{
    system("cls");
    float l, b;
    cout<<"Enter the dimensions of the wall.\nLength = ";
    cin>>l;
    cout<<"Breadth = ";
    cin>>b;

    Area obj(l, b);
    obj.display();
}