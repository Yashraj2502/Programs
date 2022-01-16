//C Program to print numbers from N to 1 in desending order

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number you want to printed in desending order:-\n");
    scanf("%d", &n);
    printf("The number is:-\n");

    int i = n;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    
    return 0;
}