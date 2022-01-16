//C Program to find common factor(LCM) of 2 & 3 till 50.

#include<stdio.h>

int main(){
	int i;
	printf("Numbers between 1 to 50 that are divisible by 2 and 3 are:-\n");

	for ( i = 1; i <= 50; i++)
	{
		if (i%2 ==0 && i%3== 0)
		{
			printf("%d\n", i);
		}
		
	}
	
	return 0;
}