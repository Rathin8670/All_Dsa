public class noOfEven_digit {
    public static void main(String[] args) {
        int arr[] = { 12, 2, 4, 5, 6, 666, 7, 784, 3433, 335566 };
        System.out.println(findNums(arr));
    }

    static int Digits(int num) {
        if (num < 0) {
            num *= -1;
        }
        // return (int) (Math.log10(num)) + 1; //optized process
        // else we also do that
        int c = 0;
        while (num > 0) {
            num = num / 10;
            c++;
        }
        return c;

    }

    static boolean even(int num) {
        int noOfdigit = Digits(num);
        return noOfdigit % 2 == 0;
    }

    static int findNums(int arr[]) {
        int count = 0;
        for (int num : arr) {
            if (even(num)) {
                count++;
            }
        }
        return count;
    }
}
