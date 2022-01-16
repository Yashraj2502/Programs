//Basic program in C (3)
//Displaying pre & post decrement.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    system("cls");
    float num;
    printf("Enter a number:-\n");
    scanf("%f", &num);

    --num;
    printf("\n\nNumber after Pre-decrement:- %f", num);

    num--;
    printf("\nNumber after post-decrement:- %f", num);
}