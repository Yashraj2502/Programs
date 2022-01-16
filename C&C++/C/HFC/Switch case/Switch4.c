//Printing Months in C using Switch Case

#include<stdio.h>

int main(){
    int month_day;
    printf("Enter a number to select the Month\n");
    scanf("%d", &month_day);

    switch (month_day)
    {
    case 1:
        printf("This Month is January\n");
        printf("This Month is of Winter Season\n");
        break;
    
    case 2:
        printf("This Month is February\n");
        printf("This Month is of Summer Season\n");
        break;

    case 3:
        printf("This Month is March\n");
        printf("This Month is of Summer Season\n");
        break;

    case 4:
        printf("This Month is April\n");
        printf("This Month is of Summer Season\n");
        break;

    case 5:
        printf("This Month is May\n");
        printf("This Month is of Summer Season\n");
        break;

    case 6:
        printf("This Month is June\n");
        printf("This Month is of Rainy Season\n");
        break;

    case 7:
        printf("This Month is July\n");
        printf("This Month is of Rainy Season\n");
        break;

    case 8:
        printf("This Month is August\n");
        printf("This Month is of Rainy Season\n");
        break;

    case 9:
        printf("This Month is September\n");
        printf("This Month is of Rainy Season\n");
        break;

    case 10:
        printf("This Month is October\n");
        printf("This Month is of Winter Season\n");
        break;

    case 11:
        printf("This Month is November\n");
        printf("This Month is of Winter Season\n");
        break;

    case 12:
        printf("This Month is December\n");
        printf("This Month is of Winter Season\n");
        break;   

    default:
        printf("Oops!! Your input is not accepted.\n");
        break;
    }

    return 0;
}