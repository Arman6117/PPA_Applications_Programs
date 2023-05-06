class Final1 {
    public static void main(String[] args) 
    {
           Demo obj1 = new Demo(11, 21, 51);
           
           System.out.println(obj1.no1);
           System.out.println(obj1.no2);
           System.out.println(obj1.no3);

           obj1.no1++;
        //    obj1.no2++;
        //    obj1.no3++;
    }
}

class Demo 
{
    public int no1;
    final public int no2;
    final public int no3;

    public Demo(int i,int j,int k)
    {
        this.no1 = i;
        this.no2 = j;
        this.no3 = k;
    }
}