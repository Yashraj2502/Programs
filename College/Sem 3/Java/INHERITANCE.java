/*
An employee works in a particular department of an organization. Every
employee has an employee number, name and draws a particular
salary. Every department has a name and a head of department. The
head of department is an employee. Every year a new head of
department takes over. Also, every year an employee is given an annual
salary enhancement. Identify and design the classes for the above
description with suitable instance variables and methods. The classes
should be such that they implement information hiding. You must give
logic in support of your design. Also create two objects of each class.
*/


import java.util.Scanner;

class employee {
    private String empName;
    private float empSalary, empID, empIncrement;

    public void setEmpName(String empName){
        this.empName = empName;
    }
    public String getEmpName(){
        return empName;
    }

    public void setEmpSal(float empSalary){
        this.empSalary = empSalary;
    }
    public float getEmpSal(){
        return empSalary;
    }

    public void setEmpID(float empID){
        this.empID = empID;
    }
    public float getEmpID(){
        return empID;
    }

    public void setEmpIncrement(float empIncrement){
        this.empIncrement = empIncrement;
    }
    public float getEmpIncrement(){
        return empIncrement;
    }
}

class department extends employee{
    private String depName, depHOD;
    private float hodEmpID;
    private int hodOfTheYear;

    public void setdepName(String depName){
        this.depName = depName;
    }
    public String getdepName(){
        return depName;
    }

    public void setdepHOD(String depHOD){
        this.depHOD = depHOD;
    }
    public String getdepHOD(){
        return depHOD;
    }

    public void sethodEmpID(float hodEmpID){
        this.hodEmpID = hodEmpID;
    }
    public float gethodEmpID(){
        return hodEmpID;
    }

    public void sethodOfTheYear(int hodOfTheYear){
        this.hodOfTheYear = hodOfTheYear;
    }
    public int gethodOfTheYear(){
        return hodOfTheYear;
    }
}

public class INHERITANCE {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");

        Scanner sc = new Scanner(System.in);

        employee obj2 = new employee();
        department obj1 = new department();

        System.out.println("Enter the employee details.");
        System.out.println("Name of the employee.");
        String empName = sc.nextLine();
        obj2.setEmpName(empName);
        System.out.println("Employee ID.");
        float empID = sc.nextFloat();
        obj2.setEmpID(empID);
        System.out.println("Salary of the employee.");
        float empSal = sc.nextFloat();
        obj2.setEmpSal(empSal);
        System.out.println("Annual increment in the salary of the employee.");
        float empIncrease = sc.nextFloat();
        obj2.setEmpIncrement(empIncrease);

        Scanner sc2 = new Scanner(System.in);
        System.out.println("\n\nEnter the department details.");
        System.out.println("Name of the department?");
        String dNAme = sc2.nextLine();
        obj1.setdepName(dNAme);
        System.out.println("HOD of the department?");
        String dhod = sc2.nextLine();
        obj1.setdepHOD(dhod);
        System.out.println("HOD of which year?");
        int hodYear = sc2.nextInt();
        obj1.sethodOfTheYear(hodYear);
        System.out.println("Employee ID of the HOD.");
        float hodID = sc2.nextFloat();
        obj1.sethodEmpID(hodID);
    }
}