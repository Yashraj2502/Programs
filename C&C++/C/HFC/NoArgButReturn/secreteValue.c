#include <stdio.h>

int secrete_value()
{ int a ;
  a=1;
  return a;
}

int main()
{   
    int b;
    b=secrete_value();
    printf("the value in secrete function is : %d",b);
    return 0;
}