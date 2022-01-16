//Program for displaying square root of given number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float srt(float a)
{
    float sqt;
    sqt = sqrt(a);
    printf("Square root of given number is:- %f", sqt);
}

float main()
{
    system("cls");
    float a;
    printf("Enter a number:-\n");
    scanf("%f", &a);
    srt(a);
    return 0;
}