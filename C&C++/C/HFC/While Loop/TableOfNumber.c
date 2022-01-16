//C Program to display the table of the entered number.

#include<stdio.h>

int main(){
    float n, multi;
    printf("Enter a number for its table:-\n");
    scanf("%f", &n);
    printf("Table of %.2f is:-\n", n); // .2 means 2 digits after decimal

    int i = 1;
    while (i <= 10)
    {
        multi = n*i;
        printf("%.2f X %d = %.2f\n", n, i, multi);
        i++;
    }
    

    return 0;
}