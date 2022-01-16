//C Program for printing number 1 to N

#include<stdio.h>

int main(){
    int n, i;
    printf("Enter last number to be printed from 1:-\n");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}