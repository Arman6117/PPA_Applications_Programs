class GetClassDemo {
    public static void main(String[] args) {
        Demo obj = new Demo();
        System.out.println("Name of the class is: "+ obj.getClass());
    }
}

class Demo
{
   public  void fun(Object obj)
   {
     System.out.println(obj.getClass());
   }
}
class Demo1
{
  
}