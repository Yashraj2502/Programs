public class StringAbc {
    public static void main(String[] args) {
/*
        String s1 = "Sachin";
        String s2 = "Sachin";
        String s3 = new String("Sachin");
        String s4 = "Saurav";

        System.out.println(s1.equals(s2)); //true
        System.out.println(s1.equals(s3)); //true
        System.out.print(s1.equals(s4)); //False

        String s5 = "sachin";
        System.out.println(s1.equals(s5)); //False
        System.out.println(s1.equalsIgnoreCase(s5));  
        //equalsIgnoreCase - ignores the case sensitivity. i.e. Sachin == sachin == SACHIN 
*/

        //compareTO - Compare each & every charc/element. If 0 then its TRUE, IF not.
        //If greater then +1. If lesser, then -1.
        String s1 = "Sachin";
        String s2 = "Sachin";
        String s3 = "Ratan";
        System.out.println(s1.compareTo(s2)); //0
        System.out.println(s1.compareTo(s3)); //1 (bcoz s1 > s3)
        System.out.println(s3.compareTo(s1)); //-1 (bcoz s3 < s1)


/*
        String s = "Hello";
        s = s.concat("Java");
        System.out.println(s);
*/


/*
        String s1 = "Sachin";
        String s2 = "Sachin";
        String s3 = new String ("Sachin");

        System.out.println(s1 == s2); //true(Bcoz both refer to )
        System.out.println(s1 == s3); //false(Bcoz s3 )
*/
    }
}
