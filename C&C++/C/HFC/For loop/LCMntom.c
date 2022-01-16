//C Program to find common factor(LCM) of N & M till X.

#include<stdio.h>

int main(){
	int i, n, m, x;
    printf("Enter 2 number whose LCM is to be found:-\n");
    printf("n = ");
    scanf("%d", &n);
    printf("\nm = ");
    scanf("%d", &m);
    printf("\nEnter last number:-\n");
    scanf("%d", &x);
	printf("Numbers between 1 to %d that are divisible by %d and %d are:-\n", x, n, m);

	for ( i = 1; i <= x; i++)
	{
		if (i%n ==0 && i%m== 0)
		{
			printf("%d\n", i);
		}
		
	}
	
	return 0;
}