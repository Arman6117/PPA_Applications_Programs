import java.awt.*;
import java.awt.event.*;

/**
 * ShortHand
 */
public class ShortHand
 {
   
     public static void main(String[] args) 
     {
        Frame fobj = new Frame("Arman");
        fobj.setSize(500, 500);  
        fobj.setVisible(true);

        Button b = new Button("OK");
      
        b.addActionListener(new ActionListener() 
        {
            public void actionPerformed(ActionEvent aobj)
            {
                System.out.println("Button pressdd");
            }
        });
        b.setBounds(10, 280, 80, 40);
        fobj.add( b);
     }
    
}