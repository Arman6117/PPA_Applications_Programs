package File_Handling.Java;
import java.io.*;

import javax.swing.text.AttributeSet.FontAttribute;
public class RandomAccess {
    public static void main(String[] args) throws Exception {
       RandomAccessFile fobj = new RandomAccessFile("Infosystem.txt", "rw");

       fobj.writeUTF("ABCDEFGHIJ");
       
       fobj.seek(0);
       System.out.println("Data:"+ fobj.readUTF());
       fobj.seek(5);

       fobj.writeUTF("****");

       fobj.seek(0);
       System.out.println("Data:"+ fobj.readUTF());

    }
}
