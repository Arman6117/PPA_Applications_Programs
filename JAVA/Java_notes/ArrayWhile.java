import java.util.*;

public class ArrayWhile {

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Enter the size of array: ");
      
         int iSize = sobj.nextInt();
       
        int Arr[] = new int [iSize];
      
        System.out.println("Enter the elements: ");
        
        int iCnt =0;
         while (iCnt <iSize) {
            Arr[iCnt] = sobj.nextInt();
            iCnt++;
         }
    
        
        System.out.println("Entered elements are: ");
        while (iCnt <iSize) {
           System.out.println(Arr[iCnt]);
            iCnt++;
         }

    }
    
}
