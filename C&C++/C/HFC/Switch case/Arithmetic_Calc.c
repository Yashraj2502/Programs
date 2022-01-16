/* Roll no. :- 01
   Name - Alapuria Yash
   Topic - C Program for arithmetic calculator using switch statement*/

#include<stdio.h>
#include<math.h>

int main(){
    float num1, num2, result;
    char operator;
    printf("Choose one of the operator (+, -, /, *)\n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("Enter 2 numbers\n");
        scanf("%f %f", &num1, &num2);
        result = num1 + num2;
        printf("Sum of the given 2 number is :- %f", result);
        break;
    
    case '-':
        printf("Enter a number which is to be subtracted\n");
        scanf("%f", &num1);
        printf("Now enter the number from which it is to be subtracted\n");
        scanf("%f", &num2);
        result = num2 - num1; 
        printf("Subtraction of the given 2 number is :- %f", result);
        break;

    case '*':
        printf("Enter 2 numbers\n");
        scanf("%f %f", &num1, &num2);
        result = num1*num2;
        printf("Product of the given 2 number is :- %f", result);
        break;

    case '/':
        printf("Enter the dividend\n");
        scanf("%f", &num1);
        printf("Now enter the divisor\n");
        scanf("%f", &num2);
        result = num1/num2; 
        printf("Subtraction of the given 2 number is :- %f", result);
        break;

    default:
        printf("Oops!!! Looks like you have entered an invalid input, Please Try again.");
        break;
    }

    return 0;
}