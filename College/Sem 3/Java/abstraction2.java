abstract class bike{
    abstract void run();
}

class splendor extends bike{
    void run(){
        System.out.println("Running Safely.");
    }
}

class abstraction2 {
    public static void main(String[] args) {
        splendor obj = new splendor();
        obj.run();

        bike bk = new splendor();
        bk.run();
    }
}