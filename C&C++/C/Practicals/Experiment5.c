/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to calculate the roots of the quadratic equation  */


#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, x1, x2, r;
    a != 0;
    printf("Enter the variables of the equation:- ");
    scanf("%f %f %f", &a, &b, &c);
    r = sqrt((b*b)-(4*a*c));

    if (r > 0)
    {
        printf("Given equation have REAL ROOTS. With roots:- ");
        x1 = ((-b+r)/2*a);
        x2 = ((-b-r)/2*a);
        printf("\n %f & %f", x1, x2);
    }

    else if (r == 0)
    {
        x1 = ((-b+r)/2*a);
        x2 = ((-b-r)/2*a);
        printf("Given equation have EQUAL ROOTS. With roots:- %f & %f", x1, x2);
    }

    else
    {
        printf("Given equation have COMPLEX ROOTS.");
    }

    return 0;
}