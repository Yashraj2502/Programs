//C Program for Finding Quotient and Remainder

#include<stdio.h>

int main(){
    int dividend, divisor,  quotient, remainder;
    printf("Enter dividend ");
    scanf("%d", &dividend);
    printf("\nEnter divisor ");
    scanf("%d", &divisor);
    
    quotient = dividend/divisor;
    printf("Quotient = %d\n", quotient);

    remainder = dividend%divisor;
    printf("Remainder = %d", remainder);

    return 0;
}