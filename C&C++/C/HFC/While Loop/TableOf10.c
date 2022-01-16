//C Program for displaying/printing table of 10

#include<stdio.h>

int main(){
    int i = 1, multi;
    printf("Table of 10 is:- \n");

    while (i <= 10)
    {
        multi = 10*i;
        printf("10 X %d = %d\n", i, multi);
        i++;
    }
    
    return 0; 
}