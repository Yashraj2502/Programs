//C++ progrm for sum of n natural no. using {[n(n+1)]/2}

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(void)
{
    system("cls");
    int n, sum;
    cout<<"Total number of n terms?\n";
    cin>>n;

    sum = (n * (n + 1)) / 2;
    cout<<"Sum of "<< n <<" terms are:- "<<sum;
    
}