//C++ program for multiplication of two number by taking numbers as i/p

#include<iostream>  
#include<stdlib.h>
using namespace std;  

class A  
{  
    public:
        float a, b; 
        int mul()  
        {  
            int c = a*b;  
            return c;  
        }     
};  
  
class B : public A  
{  
    public:  
    void display()  
    {  
        int result = mul();  
        std::cout <<"Multiplication of a and b is : "<<result<< std::endl;  
    }  
};  

int main(void)  
{  
    system("cls");
    
    B obj1;
    cout<<"Enter 2 numbers.\n";
    cout<<"a = ";
    cin>>obj1.a;
    cout<<"b = ";
    cin>>obj1.b;  
    obj1.display();  
    
    return 0;  
}