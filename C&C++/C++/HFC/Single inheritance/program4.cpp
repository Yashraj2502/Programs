//C++ program on single inheritance
//Program to take info of book as i/p

#include<iostream>
#include<stdlib.h>
using namespace std;

class library
{
    public:
        std::string libName;
        double noBook;
};

class book : public library
{
    public:
        std::string bkName;
        std::string bkAuthor;
        int bkPgNo;
        float price;
};

int main(void)
{
    system("cls");

    book obj1;
    cout<<"Name of the library?\n";
    std::getline(std::cin, obj1.libName);     
    //cin>>obj1.libName;
    cout<<"Total numbers of books in the library?\n";
    cin>>obj1.noBook;
    cout<<"Name of the book?\n";
    //std::getline(std::cin, obj1.bkName);     
    cin>>obj1.bkName;
    cout<<"Author of the book?\n";
    //std::getline(std::cin, obj1.bkAuthor);
    cin>>obj1.bkAuthor;
    cout<<"Price of the book?\n";
    cin>>obj1.price;
    cout<<"Total number of pages in the book?\n";
    cin>>obj1.bkPgNo;     

    return 0;
}