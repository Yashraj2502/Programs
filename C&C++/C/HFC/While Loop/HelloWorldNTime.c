//C Program to print HELLO WORLD N times.

#include<stdio.h>

int main(){
    int i, n;
    printf("How many HELLO WORLD is to be printed?:-\n");
    scanf("%d", &n);
    i = 1;

    while (i <= n)
    {
        printf("Hello World!\n");
        i++;
    }
    
    return 0;
}