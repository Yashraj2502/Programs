//C++ program for multiplication of two number

#include<iostream>  
#include<stdlib.h>
using namespace std;  

class A  
{  
    int a = 4;  
    int b = 5;  
    public:  
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
int main()  
{  
    system("cls");
    
    B b;  
    b.display();  
    
    return 0;  
}