//C++ program to calculate volume of cuboid

#include<iostream>
#include<stdlib.h>
using namespace std;

class cuboid 
{
    private:
    double length, breadth, height, vol; 

    public:
    static int objectCount;
     
    cuboid(float l, float b, float h) 
    {
        
        length = l;
        breadth = b;
        height = h;

        vol = length * breadth * height;
        cout<<"Volume of the cuboid:- "<<vol<<endl;

        objectCount++;
    }

    static int getCount() 
    {
        return objectCount;
    }
      
};

int cuboid::objectCount = 0;

int main(void)
{
    system("cls");

    cout << "Inital Stage Count: " << cuboid::getCount() << endl;

    float l, b, h;
    cout<<"Enter the dimensions of  the cuboid:-\n";
    cout<<"Lenght:- ";
    cin>>l;
    cout<<"breadth:- ";
    cin>>b;
    cout<<"Height:- ";
    cin>>h;

    cuboid box(l, b, h);
    cout << "Final Stage Count: " << cuboid::getCount() << endl;

    return 0;
}