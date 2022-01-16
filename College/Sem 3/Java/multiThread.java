public class multiThread extends Thread {
    public void run(){
        System.out.println("Thread is running....");
    }

    public static void main(String[] args) {
        multiThread t1 = new multiThread();
        multiThread t2 = new multiThread();

        System.out.println(t1.getName());
        System.out.println(t2.getId());

        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.MAX_PRIORITY);

        t1.start();
        t1.setName("Okaba");

        System.out.println(t1.isAlive());
    }
}
