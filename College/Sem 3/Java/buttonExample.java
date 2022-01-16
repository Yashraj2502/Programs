import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;

public class buttonExample {
    buttonExample(){
        JFrame f = new JFrame("Button example");
        JButton b = new JButton(new ImageIcon("D:\\Game\\AC\\AC- 1\\Profile Pictures\\ACOdyssey_Crest_Profile.jpg"));
        b.setBounds(100, 100, 100, 40);
        f.add(b);
        f.setSize(300, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    }

    public static void main(String[] args) {
        new buttonExample();
    }
}
