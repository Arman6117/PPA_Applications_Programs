package File_Handling.Java;
import java.io.*;
public class WriteFile {
    public static void main(String[] args) throws Exception {
        FileOutputStream fobj = new FileOutputStream("Infosystem.txt");
        String str = "India is my country";

        byte Arr[] = str.getBytes();
        fobj.write(Arr);

        fobj.close();
    }
}
