//C Program for printing character 10 times

#include<stdio.h>

int main(){
    //Taking character/symbol from user
    int i;
    char c;
    printf("Enter a symbol/character:- ");
    scanf(" %c", &c);

    for ( i = 0; i < 10; i++)
    {
        printf(" %c\n", c);
    }

    //Printing character/symbol of our choice
    /*
    for (int j = 0; j < 10; j++)
    {
        printf("@\n");
    }   */
    
    return 0;
}