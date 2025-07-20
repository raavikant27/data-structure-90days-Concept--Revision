public class SumOfArray {
    public int sum(int[] arr, int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static void main(String[] args) {
        SumOfArray sol = new SumOfArray();
        int[] arr = {1, 2, 3, 4, 5};
        int n = arr.length;
        System.out.println("Sum of array elements: " + sol.sum(arr, n));
    }
}
