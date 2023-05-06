import java.util.*;
public class ArrayFor {

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Enter the size of array: ");
      
         int iSize = sobj.nextInt();
       
        int Arr[] = new int [iSize];
      
        System.out.println("Enter the elements: ");

        for(int i=0;i<iSize;i++)
        {
            Arr[i] = sobj.nextInt();
        }
    
        
        System.out.println("Entered elements are: ");
        for(int i=0;i<iSize;i++)
        {
            System.out.println(Arr[i]);
        }

    }
    
}
