//C Program to check whether the entered number is palindrome or not.

#include<stdio.h>

int main(){
    int num;    // number to be taken
    int n2 = 0; // reverse number being generated
    int rem;    // remainder
    int qu;     // quotient

    printf("Enter number to check if its Palindrome or not:-\n");
    scanf("%d", &num);

    int n = num;
    // value of num, initiaized in n to perform operations on n
    // & num will be prepared to compare later
    while (n > 0)
    {
        rem = n % 10;       // found remainder
        n2 = n2 * 10 + rem; // gemerating number in reverse
        qu = n / 10;
        n = qu;
    }

    if (n2 == num)
    {
        printf("%d is a palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT a palindrome number.\n", num);
    }
    
    return 0;
}
