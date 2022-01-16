//Yash Alapuria
//Roll no.:- 01
//Experiment 4b
//Call by Value

#include <iostream>
#include<stdlib.h>
using namespace std;

void change(int data)
{
    data = 5;
}

int main()
{
    system("cls");
    int data = 3;
    change(data);
    cout <<"Value of the data is: "<<data<<endl;
    return 0;
}