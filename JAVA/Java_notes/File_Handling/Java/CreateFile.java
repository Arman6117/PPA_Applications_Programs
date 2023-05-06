package File_Handling.Java;
import java.io.*;
public class CreateFile {
    public static void main(String[] args) throws Exception {
        File fobj = new File("Infosystem.txt");

        if(fobj.createNewFile()) 
        {
            System.out.println("File Successfully created");
        }
        else
        {
            System.out.println("Unable to create a file");
        }
    }
}
