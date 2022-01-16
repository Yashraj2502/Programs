//Name - Yash Alapuria
//Program to print info of 10 students.

public class Student {

    String name, addr;
    int age;

    Student(){
        this.name = "Unknown";
        this.age = 0;
        this.addr = "Not Available";
    }

    void setInfo(String nme, int age1){
        this.name = nme;
        this.age = age1;
    }

    void setInfo(String nme, int age1, String add){
        this.name = nme;
        this.age = age1;
        this.addr = add;
    }

    void display(){
        System.out.println("Name of the Student:-\n" + name);
        System.out.println("Age of the Student:-\n" + age);
        System.out.println("Address of the Student:-\n" + addr);
    }
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");  

        Student[] obj;
        obj = new Student[10];

        obj[0] = new Student();
        obj[0].setInfo("Yash", 18, "Airoli");
        obj[1] = new Student();
        obj[1].setInfo("Vedh", 18);
        obj[2] = new Student();
        obj[2].setInfo("Sahil", 19, "Thane");
        obj[3] = new Student();
        obj[3].setInfo("Harshal", 19);
        obj[4] = new Student();
        obj[4].setInfo("Tejas", 19, "Bhiwandi");
        obj[5] = new Student();
        obj[5].setInfo("Priyanuj", 19);
        obj[6] = new Student();
        obj[6].setInfo("Rahul", 19, "Thane");
        obj[7] = new Student();
        obj[7].setInfo("Tejas", 20);
        obj[8] = new Student();
        obj[8].setInfo("Sean", 18, "Rabale");
        obj[9] = new Student();
        obj[9].setInfo("Parth", 25);

        System.out.println("Details of the students:-\n");
        for (int i = 0; i < 10; i++) {
            obj[i].display();
            System.out.println("\n");
        }
    }
}