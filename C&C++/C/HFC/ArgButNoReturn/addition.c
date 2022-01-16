//Addition
#include <stdio.h>

void add(int x , int y)
{
  printf("additon is: %d",x+y);
}

int main()
{   
    int a ,b;
    printf("Enter two numbers:\n");
    scanf("%d\n %d",&a,&b);
    add(a,b); 
    return 0;
}