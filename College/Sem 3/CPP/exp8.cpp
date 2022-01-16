//Yash Alapuria
//Roll no.:- 01
//Experiment 8

#include<iostream>
#include<stdlib.h>
#define MAX_NAME_LEN 100
#define MAX_DEP_LEN 50
using namespace std;

class employee
{
private:
    int empID;
    char empName[MAX_NAME_LEN], empDP[MAX_DEP_LEN];
    float empSal;

public:
    void getDetails()
    {
        cout<<"Enter employee name.\n";
        cin.getline (empName, MAX_NAME_LEN);
        //cin>>empName;
        cout<<"Enter employee department.\n";
        cin.getline (empDP, MAX_DEP_LEN);
        cout<<"Enter employee ID.\n";
        cin>>empID;
        cout<<"Enter employee salary.\n";
        cin>>empSal;
    }

    void display()
    {
        cout<<"\n**Details of Employee**";
        cout<<"\nEmployee Name       : "<<empName;
        cout<<"\nEmployee ID         : "<<empID;
        cout<<"\nEmployee Department : "<<empDP;
        cout<<"\nEmployee Salary     : "<<empSal;  
        cout<<"\n--------------------------------\n";
    }
};

int main()
{
    system("cls");
    employee obj;
    obj.getDetails();
    obj.display();
    return 0;
}
