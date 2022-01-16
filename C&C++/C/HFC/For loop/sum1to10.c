//C Program to print sum of first 10 numbers

#include<stdio.h>

int main(){
	float i, sum = 0;

	for ( i = 0; i < 10; i++)
	{
		sum = sum + i;
	}

	printf("Sum of 10 number is:- %f", sum);
	
	return 0;
}