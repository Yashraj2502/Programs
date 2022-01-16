//C Program for pythagoras opertion

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float opt(float a, float b)
{
    float sum;
    sum = sqrt((a*a) + (b*b));
    printf("Hypotenuse is:- %f", sum);
}

float main()
{
    system("cls");
    float a, b;
    printf("Enter 2 numbers:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    opt(a,b);
    return 0;
}