import java.awt.*;
import java.awt.event.*;

public class Calculator {
    public static void main(String[] args) {
        Calci obj = new Calci(400, 400, "Arman");
    }

}

class Calci extends WindowAdapter // implements ActionListener
{
    public Frame fobj;
    public Button b1, b2, b3, b4;
    public TextField t1, t2;
    public Label lobj;
    public Calci(int width, int height, String title) {
        fobj = new Frame(title);

        fobj.setSize(width, height);

        fobj.addWindowListener(this);

        b1 = new Button("ADD");
        b2 = new Button("SUB");
        b3 = new Button("MULTI");
        b4 = new Button("DIV");

        t1 = new TextField();
        t2 = new TextField();

        b1.setBounds(10, 280, 80, 40);

        b2.setBounds(100, 280, 80, 40);

        b3.setBounds(190, 280, 80, 40);

        b4.setBounds(290, 280, 80, 40);

        t1.setBounds(70, 100, 100, 40);

        t2.setBounds(220, 100, 100, 40);

        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);

        fobj.add(t1);
        fobj.add(t2);

        lobj = new Label();
        lobj.setBounds(150,25,100,40);
        fobj.add(lobj);
        
        fobj.setLayout(null);
        fobj.setVisible(true);
    }

    public void windowClosing(WindowEvent obj) {
        System.exit(0);
    }
}
