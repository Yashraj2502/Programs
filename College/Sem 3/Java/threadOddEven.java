class OddEvenRunnable implements Runnable{
    int num = 20;
    static int number = 1;
    int remainder;
    static Object lock = new Object();

    OddEvenRunnable(int remainder){
        this.remainder = remainder;
    }

    public void run(){
        while (number < num) {
            synchronized(lock)  {
                while (number % 2 != remainder) {
                    try {
                        lock.wait();
                    } catch (InterruptedException e) {
                        //Wait for number other then remainder.
                        e.printStackTrace();
                    }
                }

                System.out.println(Thread.currentThread().getName() + " " + number);
                number++;
                lock.notifyAll();
            }
        }
    }
}

class OddEven{
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J"); 
        OddEvenRunnable oddRunnable = new OddEvenRunnable(1);
        OddEvenRunnable evenRunnable = new OddEvenRunnable(0);

        Thread T1 = new Thread(oddRunnable,"Odd");
        Thread T2 = new Thread(evenRunnable,"Even");

        T1.start();
        T2.start();
    }
}