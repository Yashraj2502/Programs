//C program for Fibonacci Series.
    
#include<stdio.h>

int main(){
	float a, b, c, i, n;
	b = 0;
	c = 1;
	printf("Enter a number:-\n");
	scanf("%f", &n);

	for ( i = 1; i <= n; i++)
	{
		printf("%f\n", b);
		a = b + c;
		b = c;
		c = a;
	}
	
	return 0;
}