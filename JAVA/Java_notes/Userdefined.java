import java.util.*;;

public class Userdefined {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int Age = 0;

        try {
            System.out.println("Enter your age");

            Age = in.nextInt();

            if (Age < 18) {
                throw new AgeInvalid("Age is less than 18");
            }
        } catch (AgeInvalid obj) {
            System.out.println(obj);
        }

    }
}

class AgeInvalid extends Exception {
    public AgeInvalid(String str) {
        super(str);
    }
}