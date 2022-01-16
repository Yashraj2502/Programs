//C Program for sum of first n positive integar

#include<stdio.h>

int main(){
    int n, sum, i;
    printf("Enter last number in sum of first n positive integers:-\n");
    scanf("%d", &n);
    sum = 0;

    if (n >= 0)
    {
        i = 1;
        while (i <= n)
        {
            sum = sum + i;
            i++;
        }

        printf("Sum of first %d terms is:- %d", n, sum);
        
    }

    else
    {
        printf("Invalid input!!");
    }
    
    return 0;
}