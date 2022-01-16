//C Program to find the factorial of the given number.

#include<stdio.h>

int main(){
	double i, n, fact;
	fact = 1;
	printf("Enter the value of n:-\n");
	scanf("%lf", &n);

	for ( i = 1; i <= n; i++)
	{
		fact = fact*i;
	}
	printf("Factorial of the given number is:- %lf", fact);
	
	return 0;
}