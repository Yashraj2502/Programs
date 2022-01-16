//Program to print employee info

public class Employee {

    String Name, Add;
    int YOJ;

    Employee(String name, int yoj, String addr)
    {
        Name = name;
        YOJ = yoj;
        Add = addr;
    }

    void display()
    {
        System.out.println(Name+"\t\t"+YOJ+"\t\t\t"+Add);
    }

    public static void main(String[] args) {
        Employee e1 = new Employee("Robert", 1994, "64C - Wall street");
        Employee e2 = new Employee("Sam", 2000, "68D - Wall street");
        Employee e3 = new Employee("John", 1999, "26B - Wall street");
        
        System.out.println("Name\t\tYear of Joining\t\tAddress");
        e1.display();
        e2.display();
        e3.display();
    }
}

//While taking input:-

