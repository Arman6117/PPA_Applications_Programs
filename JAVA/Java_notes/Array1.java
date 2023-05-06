public class Array1 
{
    public static void main(String[] args) 
    {
        // Static way
       int arr1[] = {10,20,30,40};

       // Dynamic way
       int arr2[] = new int[4];
       arr2[0] = 10;
       arr2[1] = 20;
       arr2[2] = 30;  
       arr2[3] = 40;  

       System.out.println("Lenght of arr1 is: " +arr1.length);
       System.out.println("Lenght of arr2 is: " +arr2.length);
    }
}
