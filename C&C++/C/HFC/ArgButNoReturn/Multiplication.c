//Multiplication
#include<stdio.h>

float mul(float x, float y)
{
    printf("Multiplication is: %f", x*y);
}

float main()
{
    float a, b;
    printf("Enter two numbers:\n");
    scanf("%f\n %f",&a,&b);
    mul(a,b);
    return 0;
}