import java.util.*;

class Length {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a word: ");
        String str = sobj.nextLine();

        int len = str.length();
        System.out.println("Length of word "+str+" is: "+len);
    }
}
