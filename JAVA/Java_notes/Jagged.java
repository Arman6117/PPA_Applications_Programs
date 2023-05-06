import java.util.*;

class Jagged {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int rows = sobj.nextInt();

        int jarr[][] = new int[rows][];

        for (int i = 0; i < rows; i++) {
            System.out.println("Enter size of row " + (i + 1) + ": ");
            int n = sobj.nextInt();
            jarr[i] = new int[n];

            for (int j = 0; j < n; j++) {
                System.out.println("Enter element " + (j + 1) + " in row " + (i + 1) + ": ");
                jarr[i][j] = sobj.nextInt();
            }

            n = 0;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < jarr[i].length; j++) {
                System.out.print(jarr[i][j] + " ");
            }
            System.out.println();
        }

        

    }
}