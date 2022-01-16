public class arrayAdd {

    public static void main(String[] args) {
        //Creating 2 matrices
        int a[][] = { {1, 3, 4}, {3, 4, 5} };
        int b[][] = { {1, 3, 4}, {3, 4, 5} };

        //Creating 3rd variable
        int c[][] = new int [2][3];

        //Adding & printing addition of 2 variable
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                c[i][j] = a[i][j] + b[i][j];
                System.out.println(c[i][j]+" ");

            }

            System.out.println();
        }
    }
}