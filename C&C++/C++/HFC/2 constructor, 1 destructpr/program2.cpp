//C++ program to calculate the area of a trapezium (Constructor)

#include<iostream>
#include<stdlib.h>
using namespace std;

class Area
{
    public:
    float baseBelow, baseAbove, height, area;

    Area(float b1, float b2, float h)
    {
        baseBelow = b1;
        baseAbove = b2;
        height = h;
    }

    void display()
    {
        area = ((baseBelow + baseAbove) / 2) * height;
        cout<<"Area of the trapezium is:- "<<area;
    }
};

int main(void)
{
    system("cls");
    float b1, b2, h;
    cout<<"Enter the dimensions of the trapezium.\nAbove base (a) = ";
    cin>>b1;
    cout<<"Below Base (b) = ";
    cin>>b2;
    cout<<"Height = ";
    cin>>h;

    Area obj(b1, b2, h);
    obj.display();
}