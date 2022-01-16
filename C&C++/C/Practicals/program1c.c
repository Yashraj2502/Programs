//C Program for swapping two numbers without using third variable.

#include<stdio.h>

int main(){
    float a, b;

    printf("Enter 2 numbers whose values are to be swapped:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("\nValues after swapping are:-\n");
    printf("a = %f", a);
    printf("\nb = %f", b);

    return 0;
}