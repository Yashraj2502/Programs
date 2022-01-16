//C Program to display surface area of right rectangular prism

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op()
{
    float l, w, h, sarea;
    printf("Enter the length of the right rectangular prism:-\n");
    scanf("%f", &l);
    printf("Enter the width of the right rectangular prism:-\n");
    scanf("%f", &w);
    printf("Enter the height of the right rectangular prism:-\n");
    scanf("%f", &h);

    sarea = 2*(w*l + l*h + h*w);   //M_PI is MATH CONSTANT PI
    return sarea;
}

float main()
{
    system("cls");
    float dis;
    dis = op();
    printf("Surface area of right rectangular prism is:- %f", dis);
    return 0;
}