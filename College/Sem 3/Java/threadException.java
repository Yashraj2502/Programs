public class threadException extends Thread {
        public void run()
        {
            System.out.println("Thread is running using thread class");
        }
    
        public static void main(String[] args) {
            System.out.print("\033[H\033[2J");
            
            Thread a = new threadException();
            a.start();
        }
}
