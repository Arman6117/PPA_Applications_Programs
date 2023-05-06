public class Multi1 {
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


class A extends Thread
{
    public void run()
    {
        for (int i = 1; i < 100; i++) {
            System.out.println(i);
        }
    }
}