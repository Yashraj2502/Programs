/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C program to find the largest of three numbers using conditional operator */


#include<stdio.h>

int main(){
    float a, b, c, d;
    printf("Enter 3 numbers:- \n");
    scanf("%f %f %f", &a, &b, &c);

    d = (a > b) ? (a > c ? a : c) : ((b > c) ? b : c);
    printf("Largest number is:- %f", d);

    return 0;
}