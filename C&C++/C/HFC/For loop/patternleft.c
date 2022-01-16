//C Program to print left pyramid pattern using *

#include<stdio.h>

int main(){
    float i, j, n;
    printf("Enter total no. of column for the pattern:-\n");
    scanf("%f", &n);

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}