//Division
#include<stdio.h>

float div(float x, float y)
{
    printf("Division is: %f", x/y);
}

float main()
{
    float a, b;
    printf("Enter 2 numbers:-\n");
    scanf("%f\n%f", &a, &b);
    div(a,b);
    return 0;
}