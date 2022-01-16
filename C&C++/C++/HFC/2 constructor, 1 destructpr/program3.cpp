//C++ program to calculate the area of a ring (Destructor)

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class Area
{
    public:
    float Radius, radius, area;

    Area(float r1, float r2)
    {
        Radius = r1;
        radius = r2;
    }

    void display()
    {
        area = M_PI * ((Radius * Radius) - (radius * radius));
        cout<<"Area of the ring is:- "<<area;
    }

    ~Area()
    {
        //cout<<"\nDestructor is called.";
    }
};

int main(void)
{
    system("cls");
    float r1, r2;
    cout<<"Enter the dimensions of the ring.\nOuter radius (R) = ";
    cin>>r1;
    cout<<"Inner radius (r) = ";
    cin>>r2;

    Area obj(r1, r2);
    obj.display();
}