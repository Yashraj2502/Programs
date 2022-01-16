//C Program to count number of Sundays in a month

#include<stdio.h>

int main(){
    int i, n, count = 0;
    printf("Enter no. of days in the month:- \n");
    scanf("%d", &n);

    if (n == 30 || n == 31 || n == 28 || n == 29)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 7 == 0)
            {
                count = count + 1;
            }
            
        }
        if (n == 28)
        {
            printf("There are %d Sundays", count);
        }

        else if (n == 29 || n == 30 || n == 31)
        {
            printf("There are %d Sundays with probability of 1 extra sunday", count);
        }
        
    }

    else{
        printf("There is no month with %d days", n);
    }
    
    return 0;
}