//Buffer reader class

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

class employee {
    String name;
    int id, age;

    employee(String name, int id, int age){
        this.name = name;
        this.id = id;
        this.age = age;
    }

    public void displayData(){
        System.out.println("\nName :- " + this.name+"\nAge :- "+this.age+"\nID :- "+this.id);
    }

}

public class bufferReaderr{
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter Your name");
        String name = reader.readLine();
        System.out.println("Enter your age:-");
        int age = Integer.parseInt(reader.readLine());
        System.out.println("Enter your ID:-");
        int id = Integer.parseInt(reader.readLine());

        employee e1 = new employee(name, id, age);
        e1.displayData();
    }
}