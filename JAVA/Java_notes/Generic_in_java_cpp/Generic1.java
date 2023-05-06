class Generic1 {
  
    public static void Display(Integer Arr[])
    {
      for(int no: Arr)
      {
        System.out.println(no);
      }
    }
    public static void main(String[] args) {
        Integer  A[] = {10,20,30,40};
        Integer  B[] = {10,20,30,40};

        Display(A);
        Display(B);
    }
    
}