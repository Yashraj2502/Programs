//C Program to display surface area of cylinder

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op()
{
    float r, h, sarea;
    printf("Enter the radius of the cylinder:-\n");
    scanf("%f", &r);
    printf("Enter the height of the cylinder:-\n");
    scanf("%f", &h);

    sarea = (2*M_PI*r*h) + (2*M_PI*r*r);   //M_PI is MATH CONSTANT PI
    return sarea;
}

float main()
{
    system("cls");
    float dis;
    dis = op();
    printf("Surface area of cylinder is:- %f", dis);
    return 0;
}