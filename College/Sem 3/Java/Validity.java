//Name - Yash Alapuria
/*Which takes a number & perform following operations:-
    - factorial
    - Armstrong validity
    - Palindrome Validity
    - Prime validity
    - Fibonnaci Series
*/
import java.util.*;
import java.util.Scanner;
import java.util.jar.Attributes.Name;
import java.lang.Math;


public class exp2 {

    public static void factorial()
    {
        float num, fact = 1;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:");
        num = in.nextFloat();
    in.close();

        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        System.out.println("Factorial of "+num+" is: "+fact);    
        
    }

    public static void testArmstrong()
    {  
        int num, remainder, result = 0, temp;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:");
        num = in.nextInt();
        in.close();

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += Math.pow(remainder, 3);
            temp /= 10; 
        }

        if (result == num) {
            System.out.println(num+ " is an Armstrong number");
        }
        else{
            System.out.println(num+ " is NOT an Armstrong number");
        }
    }

    public static void testPalindrome()
    {
        float r, num, sum = 0, temp;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:");
        num = in.nextFloat();
        in.close();

        temp = num;
        while (num > 0) {
            r = num % 10;
            sum = (sum * 10) + r;
            num = num / 10;
        }

        if (temp == sum) {
            System.out.println("Given number is a palindrome number.");
            
        }
        else{
            System.out.println("Given number is not a palindrome number.");
        }
    }

    public static void testPrime()
    {
        float num, flag = 0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:");
        num = in.nextFloat();
        in.close();

        int m = (int) num /2;
        if (m == 0 || m == 1) {
            System.out.println(num+ " is not a prime number.");
        }

        else{
            for (int i = 2; i <= m; i++) {
                if (num % i == 0) {
                    System.out.println(num+ " is not a prime number.");
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                System.out.println(num+ " is a prime number.");
            }

        }
        
    }

    public static void fibonacciSeries()
    {
        int num1 = 0, num2 = 1, sum = 0, n;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter total no. of terms:");
        n = in.nextInt();
        in.close();

        for (int i = 0; i < n; i++) {
            System.out.print(sum+ " ");
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
    }



    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");  
        Scanner in = new Scanner(System.in);
        System.out.println("Menu:-\n1. Factorial\n2. Test Armstrong\n3. Test Palindrome\n4. Test Prime\n5. FibonacciSeries");
        System.out.println("Enter a number:-");
        int number = in.nextInt();

        switch (number) {
            case 1:
                factorial();
                break;
        
            case 2:
                testArmstrong();
                break;

            case 3:
                testPalindrome();
                break;

            case 4:
                testPrime();
                break;

            case 5:
                fibonacciSeries();
                break;

            default:
                System.out.println("Wrong input.");
                break;
        }
    }
}
