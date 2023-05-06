import java.util.*;
class Average {
    public static void main(String[] args) {
        
        Scanner sobj  = new Scanner(System.in);

        System.out.println("Enter array size: ");
        int n = sobj.nextInt();

        int arr[] = new int[n];

       
        System.out.println("Enter elements of array: ");
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sobj.nextInt();
            sum += arr[i];
        }
        
        int ave = sum/n;

        System.out.println("Average of given array elements is: "+ave);

        sobj.close();
    }    
}
