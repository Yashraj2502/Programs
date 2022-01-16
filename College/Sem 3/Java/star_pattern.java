import java.util.Scanner;


public class star_pattern {

    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");  
        int row;    
        Scanner in = new Scanner(System.in);
        System.out.println("Enter total number of rows:- ");
        row = in.nextInt();
        in.close();
        
        for (int i = 0; i < row; i++) {

            for (int k = 0; k < row-i; k++) {
                System.out.print(" ");
            }

            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}