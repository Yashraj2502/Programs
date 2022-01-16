//Program to Check the Type of Triangle || Conditional Statement || C

#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;
    printf("Enter sides of triangle\n");
    printf("Enter value of side a\n");
    scanf("%lf", &a);
    printf("Enter value of Side b\n");
    scanf("%lf", &b);
    printf("Enter value of Side c\n");
    scanf("%lf", &c);

    //We will check type of triangle only if triangle is valid
    if ((a + b) <= c || (a + c) <= b || (b + c) <= c)
    {
        printf("INVALID triangle.");
    }
    else
    {
        bool rightAngled;
        //  check right angled using pythagoras theorem
        if ( (pow(a, 2) == pow(b, 2) + pow(c, 2)) ||
             (pow(b, 2) == pow(a, 2) + pow(c, 2)) ||
             (pow(c, 2) == pow(b, 2) + pow(a, 2))  )
        {
            rightAngled = true;
        }
        
        // VALID triangle
        if (a == b && b == c)
        {
            printf("Equilateral triangle");
            return 0;
            // returned because no need to check right angle or any other type
        }

        

        else if ( (a == b && a != c && a != c) || 
             (a == c && a != b && c != b) || 
             (b == c && b != a && c != a)  )
        {
            // isosceles
            if (rightAngled == true){
                printf("Right angled isosceles triangle");
                // returned because no need to check any other type
            }
            else{
                printf("Isosceles triangle but NOT right angled");
                // returned because no need to check any other type
            }
        }
        else if (a != b && b != c && c != a)
        {
            // scalene
            if (rightAngled == true){
                printf("Right angled scalene triangle ");
                // returned because no need to check any other type
            }
            else{
                printf("Scalene triangle but NOT right angled");
                // returned because no need to check any other type
            }
        }
    }
    

    return 0;
}

/*
#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
    double a, b, c; 
    cout << "Enter sides of triangle\n";
    cout << "Enter sides of triangle\n";
    cin >> a;
    cout << "Enter value of Side b\n";
    cin >> b;
    cout << "Enter value of Side c\n";
    cin >> c;

    // We will check type of triangle only if triangle is valid
    if ((a + b) <= c || (a + c) <= b || (b + c) <= c)
    {
        cout << "NOT a valid triangle";
    }
    else
    {
        bool rightAngled;
        //  check right angled using pythagoras theorem
        if ( (pow(a, 2) == pow(b, 2) + pow(c, 2)) ||
             (pow(b, 2) == pow(a, 2) + pow(c, 2)) ||
             (pow(c, 2) == pow(b, 2) + pow(a, 2))  )
        {
            rightAngled = true;
        }
        
        // VALID triangle
        if (a == b && b == c)
        {
            cout << "Equilateral triangle";
            return 0;
            // returned because no need to check right angle or any other type
        }

        

        else if ( (a == b && a != c && a != c) || 
             (a == c && a != b && c != b) || 
             (b == c && b != a && c != a)  )
        {
            // isosceles
            if (rightAngled == true){
                cout<<"Right angled isosceles triangle";
                // returned because no need to check any other type
            }
            else{
                cout<<"Isosceles triangle but NOT right angled";
                // returned because no need to check any other type
            }
        }
        else if (a != b && b != c && c != a)
        {
            // scalene
            if (rightAngled == true){
                cout<<"Right angled scalene triangle ";
                // returned because no need to check any other type
            }
            else{
                cout<<"Scalene triangle but NOT right angled";
                // returned because no need to check any other type
            }
        }
    }
    getch();
}
*/