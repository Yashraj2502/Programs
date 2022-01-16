import java.util.Scanner;

//import jdk.internal.org.jline.utils.Display;

class car
{
    int model = 45465;
    String carName = "Ford";
    /*void display()
    {
        System.out.println("Car is visible");
    }*/

    car(int i, String name)
    {
        model = i;
        carName = name;
    }

    car()
    {
        System.out.println("Constructor is called");
    }

    void display()
    {
        System.out.println(model);
        System.out.println(carName);
    }
}
/*
class vehicle
{
    
}*/

/**
 * class1
 */
public class class1 {

    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        /*car c1 = new car();     //c1 object of class car and car() is constructor
        System.out.println(c1.model);
        System.out.println(c1.carName);
        c1.display();*/
        car c1 = new car(543, "Tesla");
        car c3 = new car();
        //System.out.println(c3);
        System.out.println(c1.carName);
        System.out.println(c1.model);
    }
}