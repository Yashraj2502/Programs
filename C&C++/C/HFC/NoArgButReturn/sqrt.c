//Sqaure root of given number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float srt()
{
    float a, sqt;
    printf("Enter a number:-\n");
    scanf("%f", &a);

    sqt = sqrt(a);
    return sqt;
}

float main()
{
    system("cls");
    float num;
    num = srt();
    printf("Square root of given number is:- %f", num);
    return 0;
}