//C Program to calculate Profit & Loss

#include<stdio.h>

int main(){
    float cp, sp, diff, a;
    printf("Enter COST PRICE:-\n");
    scanf("%f", &cp);
    printf("Enter SELLING PRICE:-\n");
    scanf("%f", &sp);

    diff = sp - cp;
    a = (diff * 100) / cp;

    if (diff > 0)
    {
        printf("You had a profit of : %.2f percent\n", a); // .2 means 2 digits after decimal

        if (a >= 50)
        {
            printf("You had a great deal !!!!!\n");
        }

        else
        {
            printf("You had an average deal.\n");
        }
        
        
    }
    
    else if (diff < 0)
    {
        printf("You have incurred a loss of : %.2f percent.\n");
    }
    
    return 0;
}