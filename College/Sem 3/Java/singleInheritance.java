class parent{
    float sal = 40000;
}

class child extends parent{
    float bonus = sal + 10000;
}

public class singleInheritance {
    public static void main(String[] args) {
        child obj = new child();

        System.out.println("Salary without bonus:- "+obj.sal);
        System.out.println("Salary with bonus:- "+obj.bonus);
    }
}