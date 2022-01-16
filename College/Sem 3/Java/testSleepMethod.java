//Multithread concept

public class testSleepMethod extends Thread{
    public void run(){
        for (int i = 1; i < 5; i++) {
            try {
                Thread.sleep(500);
                //Thread.sleep(5000);
            } catch (InterruptedException e) {
                //TODO: handle exception
                System.out.println(e);
            }

            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        testSleepMethod t1 = new testSleepMethod();
        testSleepMethod t2 = new testSleepMethod();

        t1.start();
        t2.start();
    }
}
