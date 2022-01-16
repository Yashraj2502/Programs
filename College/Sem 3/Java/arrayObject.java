//Array of object

class Student{
    int rollNo;
    String name;
    Student(int rollNo, String name)
    {
        this.rollNo = rollNo;
        this.name = name;
    }
}
public class arrayObject {
    public static void main(String[] args) {
        Student[] arr = new Student[3];
        arr[0] = new Student(1, "Yash");
        arr[1] = new Student(2, "Simran");
        arr[2] = new Student(3, "Fariha");

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i].rollNo+ " " +arr[i].name);
        }
    }
}
