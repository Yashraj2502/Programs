//C Program to show even number from 1 to 50.

#include<stdio.h>

int main(){
	int i, n;
	n = 50;
	printf("Even numbers from 1 to 50 are:-\n");

	for ( i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		
	}
	
	return 0;
}