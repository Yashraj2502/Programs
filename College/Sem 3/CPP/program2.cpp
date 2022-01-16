//Yash Alapuria
//Roll no. :- 1
//CPP, Experiment - 9b

#include<iostream>
#include<stdlib.h>
using namespace std;

class student{
    public:
    string name;
    float rollnum, marks;

    student(string sName, float rollNum, float Marks){
        name = sName;
        rollnum = rollNum;
        marks = Marks;
    }

    void display(){
        cout << rollnum << "   " << name << "   " << marks << endl;
    }
};

int main(void){
    system("cls");
    student obj1 = student("Yash Alapuria", 01, 88);
    student obj2 = student("Tejas Mahajan", 35, 94);
    obj1.display();
    obj2.display();
}