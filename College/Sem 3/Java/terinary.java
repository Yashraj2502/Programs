//Java program for terinary & uniary relation.

public class terinary {
    public static void main(String[] args) {
        int a = 10, b = 5;
        int min = (a < b) ? a:b;
        System.out.println(min);

        if (a < b) {
            System.out.println(a);
        }
        else{
            System.out.println(b);
        }
    }
}
