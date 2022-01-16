//Subtraction
#include <stdio.h>

void sub(int x , int y)
{
  printf("additon is: %d",x-y);
}

int main()
{   
    int a ,b;
    printf("Enter two numbers:\n");
    scanf("%d\n %d",&a,&b);
    sub(a,b); 
    return 0;
}