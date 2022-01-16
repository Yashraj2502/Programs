//C Program to Swap Numbers Using Temporary Variable

#include<stdio.h>

int main(){
    float a, b, temp;
    
    printf("Enter 2 numbers whose values are to be swapped:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nValues after swapping are:-\n");
    printf("a = %f", a);
    printf("\nb = %f", b);

    return 0;
}