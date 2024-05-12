public class Order_Agnostic_BS {
    public static void main(String[] args) {
        int arr[] = { 5, 4, 3, 2, 1, -1, -2 };
        int target = 5;
        System.out.println(Or_Ag_BS(arr, target));
    }

    static int Or_Ag_BS(int arr[], int target) {
        int st = 0;
        int end = arr.length - 1;
        boolean isAsc = arr[st] < arr[end];
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] == target) {
                return mid;
            }
            if (isAsc) {
                if (arr[mid] > target) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                // decending order
                if (arr[mid] > target) {
                    st = mid + 1;

                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
}
