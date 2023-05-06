// package awt;
import java.awt.*;
import java.awt.event.*;
import java.awt.Window.Type;

public class GUI4 {
    public static void main(String[] args) {
      
        ArmanFrame obj = new ArmanFrame("Hello Arman");
        
    }
}

class ArmanFrame {
    public Frame fobj;
    public ArmanFrame(String title) {
        fobj = new Frame(title);

        fobj.setSize(400, 400);

        fobj.setVisible(true);
        
        fobj.addWindowListener(new Listner());
    } 
}

class Listner extends WindowAdapter {
  
    public void windowClosing(WindowEvent obj) {
        System.exit(0);
    }
    
    

}
