//Basic program in C (3)
//Displaying pre & post increment.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    system("cls");
    float num;
    printf("Enter a number:-\n");
    scanf("%f", &num);

    ++num;
    printf("\n\nNumber after Pre-increment:- %f", num);

    num++;
    printf("\nNumber after post-increment:- %f", num);
}