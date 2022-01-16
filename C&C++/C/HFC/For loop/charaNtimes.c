//C Program to print any character/symbol N times

#include<stdio.h>

int main(){
	int i, n;
	char c;
	printf("Enter any character:-\n");
	scanf(" %c", &c);
	printf("Enter no. of times the character should repeat\n");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		printf(" %c\n", c);
	}
	
	return 0;
}