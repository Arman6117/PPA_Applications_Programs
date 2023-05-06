class OOP {
    public static void main(String Arg[]) {
        System.out.println("Inside main function");

        Arithmatic obj1 = new Arithmatic();

        Arithmatic obj2 = new Arithmatic(11,10);

        int iRet = 0;

        iRet = obj1.Addition(); // 0

        System.out.println("Addition is: "+ iRet);


        iRet = obj1.Subtraction(); // 0

        System.out.println("Subtraction is: "+ iRet);

        iRet = obj2.Addition(); // 21

        System.out.println("Addition is: "+ iRet);


        iRet = obj2.Subtraction(); // 1

        System.out.println("Subtraction is: "+ iRet);

        
    }
}

class Arithmatic {

    public int No1;
    public int No2;

    public Arithmatic() {

        System.out.println("Inside Default Constructor");

        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithmatic(int i, int j) {

        System.out.println("Inside Parametrasied Constructor");

        this.No1 = i;
        this.No2 = j;
    }

    public int Addition() {

        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }
    public int Subtraction() {

        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    }
}