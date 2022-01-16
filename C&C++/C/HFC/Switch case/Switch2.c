//C Program for Printing User Input using Switch Case 

#include<stdio.h>

int main(){
    char val;
    printf("Enter a letter from 'a' to 'e' to select the case\n");
    scanf(" %c", &val);

    switch (val)
    {
    case 'a':
        printf("You entered alphabet a \n");
        break;

    case 'b':
        printf("You entered alphabet b \n");
        break;

    case 'c':
        printf("You entered alphabet c \n");
        break;

    case 'd':
        printf("You entered alphabet d \n");
        break;

    case 'e':
        printf("You entered alphabet e \n");
        break; 
    
    default:
        printf("Oops!! Your input is not accepted.\n");
        break;
    }

    return 0;
}