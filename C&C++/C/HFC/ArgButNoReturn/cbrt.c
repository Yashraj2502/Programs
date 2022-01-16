//Program for displaying cube root of given number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float cbt(float a)
{
    float crt;
    crt = cbrt(a);
    printf("Cube root of the given number is:- %.4f", crt);
}

float main()
{
    system("cls");
    float a;
    printf("Enter a number:-\n");
    scanf("%f", &a);
    cbt(a);
    return 0;
}