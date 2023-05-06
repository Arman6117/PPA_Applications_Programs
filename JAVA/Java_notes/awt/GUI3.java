// package awt;
import java.awt.*;
import java.awt.event.*;
import java.awt.Window.Type;

public class GUI3 {
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

class Listner implements WindowListener {
    public void windowDeactivated(WindowEvent obj){}
   
    public void windowDeiconified(WindowEvent obj){}

    public void windowIconified(WindowEvent obj){}
   
    public void windowClosed(WindowEvent obj){}
    
    public void windowOpened(WindowEvent obj){}
    
    public void windowActivated(WindowEvent obj){}
    
    public void windowClosing(WindowEvent obj) {
        System.exit(0);
    }
    
    // added implementation for the windowDeactivated method
    // public void windowDeactivated(WindowEvent obj) {}
}
