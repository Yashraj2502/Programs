//Displaying cuberoot of given number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float cbt()
{
    float a, crt;
    printf("Enter a number:-\n");
    scanf("%f", &a);

    crt = cbrt(a);
    return crt;
}

float main()
{
    system("cls");
    float num;
    num = cbt();
    printf("Cube root of the given number is:- %.4f", num);
    return 0;
}