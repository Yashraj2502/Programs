//C++ program for multiplication in constructor
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

class Multiplication
{
private:
    float c;

public:
    Multiplication(float a, float b);
};

Multiplication::Multiplication(float a, float b)
{
    c = a * b;
    cout<<"Product of the given 2 number is:- "<<c;
}

int main()
{
    system("cls");
    float x, y;
    cout<<"Enter 2 numbers:-\n";
    cin>>x>>y;

    Multiplication pro(x, y);

    return 0;
}
*/

#include <iostream>  
using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name;   
       static int count;     
       Account(int accno, string name)   
        {    
             this->accno = accno;    
            this->name = name;    
            count++;  
        }    
       void display()    
        {    
            cout<<accno<<" "<<name<<endl;   
        }    
};  
int Account::count=0;  
int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Account  
    Account a2=Account(202, "Nakul");   
     Account a3=Account(203, "Ranjana");  
    a1.display();    
    a2.display();    
    a3.display();    
    cout<<"Total Objects are: "<<Account::count;  
    return 0;  
}