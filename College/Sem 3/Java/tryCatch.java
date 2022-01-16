public class tryCatch {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");

        try {
            int a = 10;
            int b = 0;
            int c = a/b;
        } catch (ArithmeticException e) {
            System.out.println(e);
        }

        int a = 10;
        int b = 5;
        int c = a/b;
        System.out.println(c);
    }
}