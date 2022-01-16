/* Roll no. :- 01
   Name :- Alapuria Yash
   Title :- C Program to find the area and perimeter of a circle.  */

#include<stdio.h>
#include<math.h>

int main(){
    float r, area, peri;
    printf("Enter the radius of the circle:- ");
    scanf("%f", &r);
    area = 3.14*r*r;
    peri = 2*3.14*r;
    printf("\n area = %f,\t perimeter = %f", area, peri);

    return 0;
}