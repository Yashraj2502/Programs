//C Program for finding Area of the triangle using heron's formula

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float opt()
{
    float a, b, c, s, area;
    //Taking Input
    printf("Enter the sides of the triangle:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    s = ((a+b+c)/2);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

float main()
{
    system("cls");
    float num;
    num = opt();
    printf("Area of the triangle is:- %f", num);
    return 0;
}