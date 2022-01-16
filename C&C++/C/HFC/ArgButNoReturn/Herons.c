//C Program for finding Area of the triangle using heron's formula

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float opt(float a, float b, float c)
{
    float s, area;
    s = ((a+b+c)/2);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is:- %f", area);
}

float main()
{
    system("cls");
    float a, b, c;
    printf("Enter the sides of the triangle:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    opt(a,b,c);
    
    return 0;
}