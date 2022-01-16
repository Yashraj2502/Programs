/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to print fibonacci series using function.*/
/*
#include<stdio.h>

float fibo(float n){
    float sum=0, n1 = 0, n2 = 1;
    for (float i = 2; i < n+1; ++i)
    {
        printf("%.2f\n", sum);
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;

    }
    printf("%.2f\n", sum);
    
    return sum;
}

void main(){
    float n;
    printf("Enter total number to terms:-\n");
    scanf("%f", &n);
    printf("Fibonacci series for %.2f terms is:-\n", n);
    fibo(n);
}*/


#include<stdio.h>
void fibonacciSeries(int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   fibonacciSeries(range);

   return 0;
}