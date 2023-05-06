public class Multi2 {
    public static void main(String[] args) 
    {
        A aobj1 = new A();
        A aobj2 = new A();

        Thread t1 = new Thread(aobj1);
        Thread t2 = new Thread(aobj2);

        t1.start();
        t2.start();
    }
}


class A implements Runnable
{
    public void run()
    {
        for (int i = 1; i < 100000; i++) {
            System.out.println(i);
        }
    }
}