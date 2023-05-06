class finalizeDemo {
    public static void main(String[] args) {
        Demo obj1 = new Demo();
        Demo obj2 = new Demo(11,21);

        obj1 = null;
        obj2 = null;
        System.gc();
      
    }
}

class Demo {
    public int No1;
    public int No2;

    public Demo() {
        System.out.println("Inside Default Constructor");
        No1 = 0;
        No2 = 0;
    }

    public Demo(int a, int b) {
        System.out.println("Inside Parametrized Constructor");
        No1 = a;
        No2 = b;
    }

    protected void finalize() {
        System.out.println("Inside Finalize method");
    }
}