//C Program for Basic SWITCH CASE.

#include<stdio.h>

int main(){
    int val;
    printf("Enter a number from 1 to 4 to select the case\n");
    scanf("%d", &val);

    switch (val)
    {
    case 1:
        printf("You selected Case 1\n");
        break;

    case 2:
        printf("You selected Case 2\n");
        break;

    case 3:
        printf("You selected Case 3\n");
        break;

    case 4:
        printf("You selected Case 4\n");
        break;
    
    default:
        printf("Oops!! Your input is not accepted.\n");
        break;
    }

    return 0;
}