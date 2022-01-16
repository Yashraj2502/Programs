//C Program to check whether the entered number is ARMSTRONG Number or not.

#include<stdio.h>

int main(){
  int num, check, rem, sum = 0;
  printf("Enter a number:-\n");
  scanf("%d", &num);

  check = num; 
  while (check != 0)
  {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
  }

  if (sum == num )
  {
    printf("Entered number is an ARMSTRONG number.");
  }

  else
  {
    printf("Entered number is NOT an ARMSTRONG number.");
  }
  
  return 0;
}