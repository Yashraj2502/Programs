//C Program to print a sentence N times.

#include<stdio.h>

int main(){
    char dis[200];
    int n, i;
    printf("Enter what is to be printed:-\n");
    scanf ("%[^\n]s", &dis); //Agar explain karna hai toh bol dena.
    printf("How many times it is to be printed?:-\n");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        printf("%s\n", dis);
        i++;
    }

    return 0;
}   