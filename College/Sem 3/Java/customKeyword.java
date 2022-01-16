class invalidAgeException extends Exception{
    invalidAgeException(String s){
        super(s);
    }
}

public class customKeyword {
    static void validate(int age) throws invalidAgeException{
        if (age < 18) {
            throw new invalidAgeException("not Valid.");
        }

        else {
            System.out.println("Welcome to vote.");
        }
    }

    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        try {
            validate(23);
        } catch (Exception m) {
            System.out.println("Exception occured:" +m);
        }

        System.out.println("Rest of the code....");
    }
}