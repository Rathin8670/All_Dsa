import java.util.*;

public class arrRotate_leftToright {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6 };
        System.out.println(Arrays.toString(arr));
        //int temp = arr[0];

        for (int i = 0; i < arr.length; i++) {

            arr[i - 1] = arr[i];

        }

        System.out.println(Arrays.toString(arr));
    }
}
