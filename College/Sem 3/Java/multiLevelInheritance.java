//import Animal.puppy;

class Animal{
    void eat(){
        System.out.println("Eating....");
    }
}

class dog extends Animal{
    void bark(){
        System.out.println("Barking....");
    }
}

class babyDog extends dog{
    void weep(){
        System.out.println("Weeping...");
    }
}


public class multiLevelInheritance {
    

    public static void main(String[] args) {
        babyDog obj = new babyDog();
        obj.weep();
        obj.bark();
        obj.eat();
    }
}