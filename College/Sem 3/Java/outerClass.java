//nested class

/*import java.util.Scanner;*/

class outer{
    int outerX = 64;
    int outerY = 48;
    private int outerZ = 23;
    
    class inner
    {
        void show()
        {
            System.out.println(outerX);
            System.out.println(outerY);
        }
    }
}

public class outerClass {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");  
        outer c1 = new outer();
        System.out.println(c1.outerX);
        //c1.show();
        outer.inner c2 = c1.new inner();
        c2.show();
    }
}
