//C Program to display surface area of sqaure

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op(float a)
{
    float sarea;
    sarea = 6*a*a;
    printf("Surface area of sqaure is:- %f", sarea);
}

float main()
{
    system("cls");
    float a;
    printf("Enter the side of the square:-\n");
    scanf("%f", &a);
    op(a);
    return 0;
}