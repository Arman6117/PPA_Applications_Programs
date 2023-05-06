class Generic2 {
  
    public static <T> void Display(T Arr[])
    {
      for(T no: Arr)
      {
        System.out.println(no);
      }
    }
    public static void main(String[] args) {
        Integer  A[] = {10,20,30,40};
        Float  B[] = {50.4f,12.23f,33.22f,33.11f};
        Double C[] = {20.4,212.23,323.22,122.11};

        Display(A);
        Display(B);
        Display(C);
    }
    
}