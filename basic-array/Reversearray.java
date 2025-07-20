
class Solution {
    // Function to reverse array using an auxiliary array
    public void reverse(int arr[], int n) {
        int[] ans = new int[n];
        
        // Fill new array with elements of original array in reverse order
        for (int i = n - 1; i >= 0; i--) {
            ans[n - i - 1] = arr[i];
        }
        
        // Copy the elements back to the original array
        for(int i = 0; i < n; i++) {
            arr[i] = ans[i];
        }
    }
}

// ✅ Rename Main to match file name
public class Reversearray {
    // Function to print array
    public static void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        int n = 5;
        int[] arr = {5, 4, 3, 2, 1};
        
        // Creating instance of Solution class
        Solution solution = new Solution();
        System.out.print("Original array: ");
        printArray(arr, n);
        
        // Function call to reverse the array 
        solution.reverse(arr, n); 
        System.out.print("Reversed array: ");
        printArray(arr, n);
    }
}
