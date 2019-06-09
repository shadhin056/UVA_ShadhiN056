import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int a = 0;
        int b = 0;
        int max;
        int min;
        int sum = 0;
        int big_value = 0;
        Scanner aObj = new Scanner(System.in);
        while (aObj.hasNext()) {
            a = aObj.nextInt();
            b = aObj.nextInt();

            if (a > b) {
                max = a;
                min = b;
            } else {
                max = b;
                min = a;
            }
            for (int i = min; i <= max; i++) {
                sum = check(i);
                if (big_value <= sum) {
                    big_value = sum;
                }
            }
            System.out.println(a + " " + b + " " + big_value);
            big_value = 0;
        }

    }

    private static int check(int value) {
        int count = 0;
        int i = value;
        while (i >= 1) {
            if (i == 1) {
                count++;
                break;
            } else if (i % 2 == 1) {
                count++;
                i = i * 3 + 1;
            } else {
                count++;
                i = i / 2;
            }
        }
        return count;
    }
}
