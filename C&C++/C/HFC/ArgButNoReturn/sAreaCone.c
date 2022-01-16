//C Program to display surface area of cone

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op(float r, float h)
{
    float sarea;
    sarea = M_PI*r*(r + sqrt((h*h)+(r*r)));   //M_PI is MATH CONSTANT PI
    printf("Surface area of cone is:- %f", sarea);
}

float main()
{
    system("cls");
    float r, h;
    printf("Enter the base radius of the cone:-\n");
    scanf("%f", &r);
    printf("Enter the height of the cone:-\n");
    scanf("%f", &h);
    op(r, h);
    return 0;
}