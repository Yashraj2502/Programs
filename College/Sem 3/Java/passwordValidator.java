//Java Program to check the validity
//of a password using User-Defined Exception

import java.util.*;

//class from user-defined invalidPasswordException

/**
 * invalidPasswordException
 */
class invalidPasswordException extends Exception{

    int passwordConditionViolated = 0;

    public invalidPasswordException(int conditionViolated) {
        super("Invalid Password: ");
        passwordConditionViolated = conditionViolated;
    }

    public String printMessage() {
        //call constructor of parent Exception
        //accoring to the condition violated
        switch (passwordConditionViolated) {

            //Password lenght should be between 8 to 15 characters.
            case 1:
                return("Password lenght should be"+" between 8 to 15 charcters.");
        
            //Password should not contain any space.
            case 2:
                return("Password should not"+" contain any space.");

            //Password should contain at least one digit, i.e.(0 - 9).
            case 3:
                return("Password should contain"+" at least one digit, i.e.(0 - 9).");

            //Password should contain at least one special character, i.e.(@, #, $, %, &, !, ~).
            case 4:
                return("Password should contain at"+" least one special character, i.e.(@, #, $, %, &, !, ~).");
            
            //Password should contain at least one uppercase letter, i.e.(A - Z).
            case 5:
                return("Password should contain at"+" least one uppercase letter, i.e.(A - Z).");
                
            //Password should contain at least one lowercase letter, i.e.(a - z).
            case 6:
                return("Password should contain at"+" least one lowercase letter, i.e.(a - z).");    
        }

        return(" ");
    }
}

//Driver class
public class passwordValidator{
    //A utility function to chech whether a password is valid or not.
    public static void isValid(String Password) throws invalidPasswordException {
        //for checking if password length is between 8 - 15.
        if (!((Password.length() >= 8) && (Password.length() <= 15))) {
            throw new invalidPasswordException(1);
        }

        //to check space.
        if (Password.contains(" ")) {
            throw new invalidPasswordException(2);
        }

        if (true) {
            int count = 0;
            
            //check digits from 0 to 9.
            for (int i = 0; i <= 9; i++) {
                //To convert int to String.
                String str1 = Integer.toString(i);

                if (Password.contains(str1)) {
                    count = 1;
                }
            }

            if (count == 0) {
                throw new invalidPasswordException(3);
            }
        }

        //for Special Characters.
        if (!(Password.contains("@") || Password.contains("#") || Password.contains("$") 
           || Password.contains("%") || Password.contains("^") || Password.contains("&") 
           || Password.contains("*") || Password.contains("~") || Password.contains("!")
           || Password.contains("(") || Password.contains(")") || Password.contains("-")
           || Password.contains("=") || Password.contains("+") || Password.contains("_")
           || Password.contains("[") || Password.contains("|") || Password.contains("/")
           || Password.contains("]") || Password.contains("}") || Password.contains("?")
           || Password.contains("'") || Password.contains("{") || Password.contains(">")
           || Password.contains(",") || Password.contains(".") || Password.contains("<"))) {
            
            throw new invalidPasswordException(4);
        }

        if (true) {
            int  count = 0;

            //Checking uppercase letters.
            for (int i = 65; i <= 90; i++) {
                    //type casting
                    char c = (char) i;
                    String str1 = Character.toString(c);

                    if (Password.contains(str1)) {
                        count = 1;
                    }
            }

            if (count == 0) {
                throw new invalidPasswordException(5);
            }
        }

        if (true) {
            int count = 0;

            //Checking lowercase letters.
            for (int i = 90; i <= 122; i++) {
                    //type casting.
                    char c = (char) i;
                    String str1 = Character.toString(c);

                    if (Password.contains(str1)) {
                        count = 1;
                    }
            }
            if (count == 0) {
                throw new invalidPasswordException(6);
            }
        }
        //Password is invalid.
    }

    //Driver code.
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a password:");
        String password = sc.nextLine();
        try {
            System.out.println("Is password " + password + " valid?");
            isValid(password);
            System.out.println("Valid Password.");
        } catch (invalidPasswordException e) {
            System.out.print(e.getMessage());
            System.out.println(e.printMessage());
        }

        Scanner sc1 = new Scanner(System.in);
        System.out.println("\nRe-Enter valid password:");
        String passwordNew = sc1.nextLine();
        try {
            System.out.println("\nIs password " + passwordNew + "valid?");
            isValid(passwordNew);
            System.out.println("Valid Password.");
        } catch (invalidPasswordException e) {
            System.out.print(e.getMessage());
            System.out.println(e.printMessage());
        }
        //sc1.close();
        //sc.close();
    }
}