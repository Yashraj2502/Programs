//C Program for sum of 1 to n terms 

#include<stdio.h>

int main(){
    float i, n, sum;
    sum = 0;
    printf("Enter the last number for the sum of series from 1:- ");
    scanf("%f", &n);

    for ( i = 1; i < n; i++)
    {
        sum = sum + i;
    }

    printf("\n%f", sum);
    
    return 0;
}