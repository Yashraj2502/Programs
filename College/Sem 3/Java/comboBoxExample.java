import javax.swing.JComboBox;
import javax.swing.JFrame;

public class comboBoxExample {
    JFrame f;
    comboBoxExample(){
        f = new JFrame("Combo box example.");
        String country[] = {"India", "Aus", "U.S.A.", "Dubai"};
        JComboBox cb = new JComboBox(country);
        cb.setBounds(50, 50, 90, 20);
        f.add(cb);
        f.setLayout(null);
        f.setSize(400, 500);
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new comboBoxExample();
    }
}
