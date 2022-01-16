//Name - Yash Alapuria
//Program to reverse the string/array

import java.util.Scanner;

public class revArray {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");  

        Scanner rev = new Scanner (System.in);
        System.out.println("Enter the size of the array");
        int n = rev.nextInt();
        int arr[] = new int[n];

        System.out.print("Enter the elements:-\n");
        for (int i = 0; i < n; i++) {
            arr[i] = rev.nextInt();
        }
        System.out.println();

        System.out.println("Reversed order is:-");
        for (int i = n-1; i >= 0; i--) {
            System.out.print(arr[i]+", ");
        }
    }
}