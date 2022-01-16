//Yash Alapuria
//Roll no. :- 1
//CPP, Experiment - 9

#include<iostream>
#include<stdlib.h>
using namespace std;

class display{
    public:
    float a, b;
    
    display(){
        a = 55;
        b = 84;
    }
};

int main(void){
    system("cls");
    display obj;
    cout << "a : " << obj.a;
    cout << "\nb : " << obj.b;
}