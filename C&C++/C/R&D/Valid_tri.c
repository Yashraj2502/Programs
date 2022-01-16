//Valid Triangle or Not Program || Conditional Statement || C++ || Turbo C++

#include<stdio.h>

int main(){
    char val;
    float a,b,c, res;
    printf("Enter 'S' for verifying through side & 'A' for verifying through angles.\n");
    scanf(" %c", &val);

    switch (val)
    {
    case 'A':
        printf("Enter the angles of triangle\n");
        printf("Enter 1st angle in degrees.\n");
        scanf("%f", &a);
        printf("Enter 2nd angle in degrees.\n");
        scanf("%f", &b);
        printf("Enter 3rd angle in degrees.\n");
        scanf("%f", &c);
        res = a+b+c;

        //In any triangle, Sum of all 3 angles is equal to 180
        if (res==180.0000)
        {
            printf("VALID triangle.");
        }
        else
        {
            printf("INVALID triangle.");
        }
        break;

    case 'S':
        printf("Enter sides of triangle\n");
        printf("Enter value of Side a\n");
        scanf("%f", &a);
        printf("Enter value of Side b\n");
        scanf("%f", &b);
        printf("Enter value of Side c\n");
        scanf("%f", &c);

        // sum of two sides must be strictly greater than third side
        // Eg   3,4,5 or 2,5,6--- valid triangle
        //      1,2,3 or 1,11,10 --- not valid triangle
        if ((a+b) <= c || (a+c) <= b || (b+c) <= c)
        {
            printf("INVALID triangle.");
        }
        else
        {
            printf("VALID triangle.");
        }
        
        break;
    
    default:
        printf("Wrong input.");
        break;
    }

    return 0;
}