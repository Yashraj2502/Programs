//To calculate gross & net salary 


//import java.util.*;
import java.util.Scanner;
//import java.util.jar.Attributes.Name;

public class exp1 {

    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");  
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the name of the employee:-");
        String empName = in.next();
        System.out.println("Enter employee number:-");
        int empno = in.nextInt();
        System.out.println ("Enter the basic salary:-");
        int sal = in.nextInt();
        in.close();

        double DA, HRA, PF, GP, NP, CCA, PT;
        GP = 0;
        NP = 0;
        CCA = 240;    
        PT = 100;
        DA = 0.70*sal;
        HRA = 0.30*sal;
        PF = 0.10*sal;
        GP = sal + DA + HRA + CCA;
        NP = GP - PF - PT;

        System.out.println("Name of the employee: "+empName);
        System.out.println("Employee number: "+empno);
        System.out.println("Basic salary: "+sal);
        System.out.println("Gross salary: "+GP);
        System.out.println("Net salary: "+NP);
    }
}
