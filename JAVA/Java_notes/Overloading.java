public class Overloading {
    public static void main(String[] args) 
    {
       Demo obj = new Demo();

       int A = 10,B =20,C=30,iret = 0;
 
       double X = 10.5 , Y = 20.5,Z = 30.8,dret =0.0;

       iret = obj.Addition(A, B);
       iret = obj.Addition(A, B,C);

       dret = obj.Addition(X, Y);
       dret = obj.Addition(X, Y,Z);

       System.out.println(iret);
      
    }
}

class Demo
{
    public int Addition(int a,int b)
    {
        return a+b;
    }
    public int Addition(int a,int b,int c)
    {
        return a+b+c;
    }
    public double Addition(double a, double b)
    {
        return a+b;
    }
    public double Addition(double a, double b,double  c)
    {
        return a+b+c;
    }
}
