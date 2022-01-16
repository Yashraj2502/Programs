//C Program for addition of 2 square root number

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float opt()
{
    float a, b, sum;
    //Taking Input
    printf("Enter 2 numbers:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);

    sum = sqrt(a) + sqrt(b);
    return sum;
}

float main()
{
    system("cls");
    float num;
    num = opt();
    printf("After taking sqaure root, sum of given two number is:- %f", num);
    return 0;
}