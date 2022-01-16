//Week-Days Program in C

#include<stdio.h>

int main(){
    int week_day;
    printf("Enter a number to select the week day\n");
    scanf("%d", &week_day);

    switch (week_day)
    {
    case 1:
        printf("Today is Monday\n");
        break;

    case 2:
        printf("Today is Tuesday\n");
        break;

    case 3:
        printf("Today is Wednesday\n");
        break;

    case 4:
        printf("Today is Thursday\n");
        break;

    case 5:
        printf("Today is Friday\n");
        break;

    case 6:
        printf("Today is Saturday\n");
        break;

    case 7:
        printf("Today is Sunday\n");
        break;
    
    default:
        printf("Oops!! Your input is not accepted.\n");
        break;
    }

    return 0;
}