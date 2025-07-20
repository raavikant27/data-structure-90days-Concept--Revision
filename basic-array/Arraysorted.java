public class Arraysorted {

    // Function to check if array is sorted
    public boolean arraySortedOrNot(int[] arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false; // Not sorted
            }
        }
        return true; // Sorted
    }

    // Main method
    public static void main(String[] args) {
        Arraysorted solution = new Arraysorted();

        int[] arr = {1, 2, 3, 4, 5}; // Test input
        int n = arr.length;

        boolean sorted = solution.arraySortedOrNot(arr, n);

        if (sorted) {
            System.out.println("Array is sorted.");
        } else {
            System.out.println("Array is not sorted.");
        }
    }
}
