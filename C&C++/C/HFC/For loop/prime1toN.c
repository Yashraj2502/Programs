/*  Roll no.:- 01
    Name - Alapuria Yash 
    Title - Program to find whether the entered number is prime or not.*/

#include<stdio.h>

int main(){
    int i, m = 0, n, c = 0;
    printf("Enter the Number to check Prime:-\n");
    scanf("%d", &n);
    m = n/2;

    for ( i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            printf("Entered number is not a Prime Number.\n");
            c = 1;
            break;
        }
        
    }
    if (c == 0)
    {
        printf("Entered number is a Prime Number.\n");
    }
    
    return 0;
}