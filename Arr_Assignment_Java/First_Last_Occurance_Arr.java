import java.util.Arrays;

public class First_Last_Occurance_Arr {
    public static void main(String[] args) {
        int arr[] = { 5, 7, 7, 7, 8, 8, 9, 10, 11, 12 };
        int target = 7;
        System.out.println(Arrays.toString(rangeSearch(arr, target)));
    }

    static int[] rangeSearch(int arr[], int target) {
        int ans[] = { -1, -1 };
        int st = search(arr, target, true);
        int end = search(arr, target, false);
        ans[0] = st;
        ans[1] = end;
        return ans;
    }

    static int search(int arr[], int target, boolean isStartingIndex) {
        int ans = -1;
        int st = 0;
        int end = arr.length - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] > target) {
                end = mid - 1;
            } else if (arr[mid] < target) {
                st = mid + 1;
            } else {
                // potential ans found
                ans = mid;
                if (isStartingIndex) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }

            }
        }
        return ans;
    }
}
