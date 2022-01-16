//C program to calculate square or cube of the given number

#include<stdio.h>
#include<math.h>

int main(){
    double num, result;
    char input; 
    printf("Enter a number:- ");
    scanf("%lf", &num);
    printf("Enter 'S' for Square-root & 'C' for Cube-root\n");
    scanf(" %c", &input);

    switch (input) //2 cases of same alphabet because of Case sensitive.
    {
    case 's':
        result = num*num;
        printf("%lf", result);
        break;

    case 'S':
        result = num*num;
        printf("%lf", result);
        break;
    
    case 'c':
        result = num*num*num;
        printf("%lf", result);
        break;

    case 'C':
        result = num*num*num;
        printf("%lf", result);
        break;
    
    default:
        printf("Oops!!! Looks like you have entered an invalid input, Please Try again.");
        break;
    }

    return 0;
}