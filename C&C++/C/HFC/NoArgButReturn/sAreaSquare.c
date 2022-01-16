//C Program to display surface area of sqaure

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op()
{
    float a, sarea;
    printf("Enter the side of the square:-\n");
    scanf("%f", &a);

    sarea = 6*a*a;
    return sarea;
}

float main()
{
    system("cls");
    float dis;
    dis = op();
    printf("Surface area of sqaure is:- %f", dis);
    return 0;
}