// File: CountDigit.java
public class CountDigit {
    public int countDigit(int n) {
        if (n == 0) return 1;
        int cnt = 0;
        while (n > 0) {
            cnt++;
            n /= 10;
        }
        return cnt;
    }

    public static void main(String[] args) {
        int n = 6678;
        CountDigit obj = new CountDigit();
        int ans = obj.countDigit(n);
        System.out.println("The count of digits in the given number is: " + ans);
    }
}
