//C Program to find Square or Cube root

#include<stdio.h>
#include<math.h>

int main(){
    float num, result;
    char input; 
    printf("Enter a number:- ");
    scanf("%f", &num);
    printf("Enter 'S' for Square-root & 'C' for Cube-root\n");
    scanf(" %c", &input);

    switch (input) //2 cases of same alphabet because of Case sensitive.
    {
    case 's':
        result = sqrt(num);
        printf("Square root of the given number is :- %f", result);
        break;

    case 'S':
        result = sqrt(num);
        printf("Square root of the given number is :- %f", result);
        break;
    
    case 'c':
        result = cbrt(num);
        printf("Cube root of the given number is :- %f", result);
        break;

    case 'C':
        result = cbrt(num);
        printf("Cube root of the given number is :- %f", result);
        break;

    default:
        printf("Oops!!! Looks like you have entered an invalid input, Please Try again.");
        break;
    }

    return 0;
}