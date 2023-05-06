public class Java_Binary_Search {

    public static int binarysearch(int marks[], int key) {

        int start = 0;
        int end = marks.length - 1;
        int mid;

        while (start <= end) {
            mid = (start + end) / 2;

            if (marks[mid] == key) {
                return mid;
            }

            if (marks[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // Check if the key was found
        if (marks[start] == key) {
            return start;
        }

        return -1;
    }

    public static void main(String args[]) {
        int key = 70;
        int marks[] = { 20, 30, 40, 56, 85, 98, 54 };
        System.out.println("index for key is : " + binarysearch(marks, key));
    }
}
