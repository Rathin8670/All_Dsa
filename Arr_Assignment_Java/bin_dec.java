public class bin_dec {
    public static void main(String[] args) {
        int bin = 111;
        int dec=7;
        System.out.println(BinD(bin));
        System.out.println(decTobin(dec));
    }

    // bin to decimal
    static int BinD(int binNo) {
        int decNo = 0;
        int pow = 0;
        while (binNo > 0) {
            int ld = binNo % 10;
            decNo += ld * Math.pow(2, pow);
            pow++;
            binNo /= 10;

        }
        return decNo;
    }

    // dec to binary
    static int decTobin(int decNo) {
        int binNo = 0;
        int pow = 0;
        while (decNo > 0) {
            int rem = decNo % 2;
            binNo += rem * Math.pow(10, pow);
            pow++;
            decNo /= 2;

        }
        return binNo;
    }

}
