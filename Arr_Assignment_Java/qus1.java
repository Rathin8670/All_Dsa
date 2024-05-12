import java.util.*;

public class qus1 {
    public static void main(String[] args) {
        // String ch='A';
        // String chh='a';
        // int arr[][] = { { 1, 2, 3, 4 }, { 5, 6, 7 }, { 8, 9 } };
        // System.out.println(arr[2][0]);
        Scanner in = new Scanner(System.in);
        System.out.println("enter row no:");
        int row = in.nextInt();
        System.out.println("enter col no:");
        int col = in.nextInt();

        int arr[][] = new int[row][col];

        for (int r = 0; r < arr.length; r++) {
            for (int c = 0; c < arr[r].length; c++) {
                arr[r][c] = in.nextInt();

            }
        }
        // output
        for (int r = 0; r < arr.length; r++) {
            System.out.println(Arrays.toString(arr[r]));
        }

    }
}
