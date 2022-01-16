//C Program for pythagoras opertion

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float opt()
{
    float a, b, sum;
    printf("Enter 2 numbers:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);

    sum = sqrt((a*a) + (b*b));
    return sum;
}

float main()
{
    system("cls");
    float num;
    num = opt();
    printf("Hypotenuse is:- %f", num);
    return 0;
}