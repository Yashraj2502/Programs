//C Program to display surface area of cone

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op()
{
    float r, h, sarea;
    printf("Enter the base radius of the cone:-\n");
    scanf("%f", &r);
    printf("Enter the height of the cone:-\n");
    scanf("%f", &h);

    sarea = M_PI*r*(r + sqrt((h*h)+(r*r)));   //M_PI is MATH CONSTANT PI
    return sarea;
}

float main()
{
    system("cls");
    float dis;
    dis = op();
    printf("Surface area of cone is:- %f", dis);
    return 0;
}