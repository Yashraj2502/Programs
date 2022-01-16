//C Program to display surface area of right rectangular prism

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float op(float l, float w, float h)
{
    float sarea;
    sarea = 2*(w*l + l*h + h*w);   //M_PI is MATH CONSTANT PI
    printf("Surface area of right rectangular prism is:- %f", sarea);
}

float main()
{
    system("cls");
    float l, w, h;
    printf("Enter the length of the right rectangular prism:-\n");
    scanf("%f", &l);
    printf("Enter the width of the right rectangular prism:-\n");
    scanf("%f", &w);
    printf("Enter the height of the right rectangular prism:-\n");
    scanf("%f", &h);

    op(l,w,h);
    return 0;
}