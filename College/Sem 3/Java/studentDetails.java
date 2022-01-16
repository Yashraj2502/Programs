/*import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
//import java.awt.event.WindowsEvent;
import javax.swing.BoxLayout;
import javax.swing.JTextField;
import javax.swing.plaf.basic.BasicLabelUI;
import javax.security.auth.Subject;

//import javafx.application.Application;

public class student extends Frame implements ActionListener{
    Label title = new Label();
    Label name = new Label();
    TextField tName = new TextField();
    Label DOB = new Label("DOB:");
    Label Gender = new Label("Gender:");
    Label address = new Label("Address:");
    Label zip = new Label("Zip code:");
    Label course = new Label("Course:");
    Label sem = new Label("Semester:");
    Label gr = new Label("Gr. No.:");

    Button submit, reset;
    Panel op = new Panel();
    TextField tgr, tZip, tDOB;
    TextArea area;
    Choice csem, sCourse;
    CheckBox Female, Male;
    Font f = new Font("Arial", Font.BOLD, 15);
    String nm, birth, gndr = null, addr, corse;
    String zCode = "0", Semester = "0", grt = "0";
    Label name_lb = new Label("Name : " + nm);
    Label gender_label = new Label("Gender : " + gndr);
    Label birth_label = new Label("Date Of Birth : " + birth);
    Label add_lb = new Label("Address : " + addr);
    Label course_lb = new Label("Course : " + corse);
    Label zip_lb = new Label("Zip Code : " + zCode);
    Label sem_lb = new Label("Semester : " + Semester);
    Label gr_lb = new Label("\nGr No. : " + grt);

    public student(){
        new Frame();
        this.setLayout(null);
        title = new Label("Registration Form");
        title.setFont(new Font("Arial", Font.PLAIN, 30));

        title.setSize(300, 30);
        title.setLocation(265, 30);
        this.add(title);
        name = new Label("Name: ");
        name.setFont(f);
        name.setBound(100, 100, 100, 20);
        this.add(name);

        tName = new TextField();
        tName.setBound(200, 100, 200, 20);
        this.add(tName);
        DOB.setBound(100, 130, 100, 20);
        DOB.setFont(f);
        this.add(DOB);
        tDOB = new TextField();
        tDOB.setBounds(300, 130, 100, 20);
        this.add(tDOB);
        gender.setBounds(100, 160, 80, 20);
        gender.setFont(f);
        CheckBoxGroup cbg = new CheckBoxGroup();
        Male = new Checkbox("Male", cbg, true);
        Male.setBOunds(200, 160, 50, 20);
        Female = new Checkbox("Female", cbg, false);
        //Female.setBOunds(200, 160, 50, 20);
        Female.setBOunds(260, 160, 70, 20);
        this.add(Gender);
        this.add(Male);
        this.add(Female);
        address.setBounds(100, 190, 100, 20);
        address.setFont(f);
        this.add(address);
        area = new TextArea();
        area.setBounds(200, 190, 200, 80);
        this.add(area);

        zip.setBounds(100, 280, 100, 20);
        zip.setFont(f);
        this.add(zip);
        tZip = new TextField();
        tZip.setBounds(200, 280, 100, 20);
        this.add(tZip);

        course.setBounds(100, 310, 100, 20);
        course.setFont(f);
        this.add(course);
        sCourse.add(course);
        sCourse.add("Not Selected");
        sCourse.add("Computer Science");
        sCourse.add("Information Technology");
        sCourse.add("Mechanical Engineering");
        sCourse.add("Civil Engineering");
        sCourse.add("AutoMobile Engineering");
        sCourse.add("AI & ML");
        sCourse.add("ETC...");
        sCourse.setBounds(200, 310, 150, 20);
        this.add(sCourse);
        
        sem.setBounds(100, 340, 100, 20);
        sem.setFont(f);
        this.add(sem);
        
        csem = new Choice();
        csem.add("1");
        csem.add("2");
        csem.add("3");
        csem.add("4");
        csem.add("5");
        csem.add("6");
        csem.add("7");
        csem.add("8");
        csem.setBounds(200, 340, 40, 20);
        this.add(csem);

        gr.setBounds(100, 370, 100, 20);
        gr.setFont(f);
        this.add(gr);

        tgr = new TextField();
        tgr.setBounds(200, 370, 100, 20);
        this.add(tgr);

        submit = new Button("Submit");
        submit.setFont(f);
        submit.setBounds(100, 410, 100, 20);       
        reset = new Button("Reset");
        reset.setFont(f);
        reset.setBounds(230, 410, 100, 20);
        this.add(submit);
        this.add(reset);
        submit.addActionListener(this);
        reset.addActionListener(this);

        op.setBounds(430, 100, 300, 400);
        this.add(op);
        op.setVisible(false);
        op.add(name_lb);
        op.add(gender_label);
        op.add(birth_label);
        op.add(add_lb);
        op.add(course_lb);
        op.add(zip_lb);
        op.add(sem_lb);
        op.add(gr_lb);
        op.setLayout(new BoxLayout(op, javax.swing.BoxLayout.Y_AXIS));
        addWindowListener(new WindowAdapter(){
            public void windowCLosing(WindowEvent e){
                dispose();
            }
        });

        setSize(700, 500);
        setVisible(true);
    }

    public static void main(String[] args) {
        new student();
    }

    //@Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource() == submit){
            if(tName.getText() != null){
                nm = tName.getText();
            }
            if(tDOB.getText() != null){
                birth = tDOB.getText();
            }
            if (Male.isEnabled()) {
                gndr = Male.getLabel();
            }
            else{
                gndr = Female.getLabel();
            }
            if (area.getText() != null) {
                addr = area.getText();
            }
            if (zip.getText() != null) {
                zCode = tZip.getText();
            }
            if(sCourse.getSelectedItem() != "Not Selected"){
                corse = sCourse.getSelectedItem();
            }
            if(csem.getSelectedIndex() != 0){
                Semester = "" + csem.getSelectedIndex();
            }
            if(tgr.getText() != "0"){
                grt = tgr.getText();
            }

            name_lb.setText("Name: "+nm);
            gender_label.setText("Gender: "+gndr);
            birth_label.setText("Date Of Birth: "+birth);
            add_lb.setText("Address: "+addr);
            course_lb.setText("Course: "+corse);
            zip_lb.setText("Zip Code: "+zCode);
            sem_lb.setText("Semester: "+Semester);
            gr_lb.setText("\nGr No. : "+grt);
            op.setVisible(true);
        }
        else{
            tName.setText(null);
            tDOB.setText(null);
            area.setText(null);

        }
    }
}
*/

import javax.swing.*;

import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class student extends Frame implements ActionListener{
    Label title = new Label();
    Label n = new Label();
    TextField t = new TextField();
    Label dob = new Label("Date Of Birth");
    Label gender = new Label("Gender");
    Label address = new Label("Address");
    Label pincode = new Label("Pincode");
    Label tCourse = new Label("Course");
    Label grNO = new Label("Gr No.");
    Label sem = new Label("Semester");
    Button submit, reset;
    Panel op = new Panel();
    TextField tgr, tPin, tDOB, course;
    TextArea area, addrs;
    Choice cSem, sCourse;

    Checkbox female, male;
    Font f = new Font("Arial", Font.BOLD, 15);
    String name, birth, gendr = null, addr, corse;
    String pCode = "0", semester = "0", grt = "0";
    Label nameLabel = new Label("Name: " +name);
    Label birthLabel = new Label("Date of Birth: " +birth);
    Label genderLabel = new Label("Gender: "+gendr);
    Label addressLabel = new Label("Address: " +addr);
    Label pincodeLabel = new Label("Pincode: " +pCode);
    Label courseLabel = new Label("Course: " +corse);
    Label semesterLabel = new Label("Semester: " +semester);
    Label grNoLabel = new Label("Gr. No.:- " +grt);

    public student(){
        new Frame();
        this.setLayout(null);
        title = new Label("Registration Form");
        title.setFont(new Font("Arial", Font.PLAIN, 30));
        title.setSize(1000, 100);
        title.setBounds(190, 20, 500, 52);
        this.add(title);

        n = new Label("Name: ");
        n.setBounds(100, 100, 100, 20);
        this.add(n);
        n.setFont(f);

        t = new TextField();
        t.setBounds(200, 100, 200, 20);
        this.add(t);

        dob.setBounds(100, 130, 100, 20);
        dob.setFont(f);
        this.add(dob);

        tDOB = new TextField();
        tDOB.setBounds(200, 130, 200, 20);
        this.add(tDOB);

        gender.setBounds(200, 160, 80, 20);
        gender.setBounds(100, 160, 80, 20);
        gender.setFont(f);

        CheckBoxGroup cbg = new CheckBoxGroup();
        
    }
    
}