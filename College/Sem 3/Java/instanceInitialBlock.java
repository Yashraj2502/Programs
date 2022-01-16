public class instanceInitialBlock {

    static{         //it is called STATIC BLOCK
        int i = 56;
        System.out.println(i);
    }

    //Instant Initialization block
    {
        System.out.println("Initization Block");
    }

    public instanceInitialBlock(){
        System.out.println("ConstructorBlock");
    }

    public static void main(String[] args) {
        instanceInitialBlock b1 = new instanceInitialBlock();
    }
}
