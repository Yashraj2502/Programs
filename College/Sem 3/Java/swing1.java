import javax.swing.JCheckBox;
import javax.swing.JFrame;

//Check box example

public class swing1 {
    swing1(){
        JFrame f = new JFrame("Check Box example");
        JCheckBox checkBox1 = new JCheckBox("C++");
        checkBox1.setBounds(100, 100, 50, 50);
        JCheckBox checkBox2 = new JCheckBox("Java", true);
        checkBox2.setBounds(100, 150, 50, 50);
        
    }
}
