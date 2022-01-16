//Method overloading
//Method has same name but different parameters

import java.util.Scanner;

/**
 * calculateCube
 */
class calculateCube {

    public void cube()
    {
        System.out.println("No parameter to this method");
    }

    public float cube( float x)
    {
        float cube = x*x*x;
        System.out.println("Cube of the given number in decimal is:- "+ cube);
        return cube;
    }

    public int cube(int x)
    {
        int cube = x*x*x;
        System.out.println("Cube in integral form:- "+ cube);
        return cube;
    }
}

public class MethodaOverloading {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        int n;
        float num;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:- ");
        num = in.nextInt();
        in.close();

        n = (int) num;

        calculateCube c1 = new calculateCube();
        c1.cube();
        c1.cube(num);
        c1.cube(n);
    }
}
