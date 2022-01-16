//C program to find area of the circle

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op()
{
    float area, r;
    printf("Enter the radius of the circle:-\n");
    scanf("%f", &r);

    area = M_PI*r*r;   //M_PI is MATH CONSTANT PI
    return area;
}

float main()
{
    system("cls");
    float dis;
    dis = op();
    printf("Area of the circle is:- %f", dis);
    return 0;
}