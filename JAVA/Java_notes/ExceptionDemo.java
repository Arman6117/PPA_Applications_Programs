import java.util.Scanner;

class ExceptionDemo
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0,no2 =0; 
        float ans =0.0f;
        
        System.out.println("Enter first number");
        no1 = sobj.nextInt();

        System.out.println("Enter second number");
        no2 = sobj.nextInt();

        ans = no1/no2;

        System.out.println("Division is: " + ans);
    }
}