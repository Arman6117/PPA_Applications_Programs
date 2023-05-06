

public class Super {
    public static void main(String[] args) 
    {
        Derived dobj = new Derived();
        dobj.gun();
    }
}

class Base 
{
    public int A;

    public Base()
    {
        System.out.println("Base default constructor");
       this.A = 11;
    }
    public Base(int i)
    {
        System.out.println("Base parametrasied constructor");
       this.A = 11;
    }
    
    public void fun()
    {
        System.out.println("Base fun");
    }
}

class Derived extends Base
{
    public int X;

    public Derived()
    {
        super(11);
        System.out.println("Derived constructor");
       this.X = 51;
    }
    public Derived(int i)
    {
        System.out.println("Derived constructor");
       this.X = 51;
    }
    
    public void gun()
    {
        System.out.println("Derived gun");

        System.out.println("Value of A: "+ super.A);

        super.fun();
    }
}
