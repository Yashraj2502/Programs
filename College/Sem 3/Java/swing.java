import javax.swing.*;
import javax.swing.JButton;
import javax.swing.JFrame;

public class swing {
    public static void main(String[] args) {
        JFrame frame = new JFrame("My first GUI.");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 300);
        JButton button = new JButton("Press");
        frame.getContentPane().add(button);
        frame.setVisible(true);
    }
}
