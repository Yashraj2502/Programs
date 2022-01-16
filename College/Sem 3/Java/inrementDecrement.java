public class inrementDecrement {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        int a = 34, b = 4, c;
        c = a + b;
        /*
        c = a * b;
        c = a / b;
        c = a - b;
        c = a % b;
        //  <<,>>
        //  <<<,>>>

        a = 8; //1 0 0 0 0 0
        System.out.println(a<<2); //32
        //Logical operator;
        //&, !. |
        a = 4; //0100
        b =5;
        */


        //Some error
        System.out.println(c--); //Increment operator, c = 39
        System.out.println(c++); //Decrement operator, c = 37
    }
}
