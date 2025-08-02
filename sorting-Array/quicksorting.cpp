#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to partition the array
    int partition(vector<int>& arr, int low, int high) {

        // Choosing a random index between low and high
        int randomIndex = low + rand() % (high - low + 1);
        // Swap the random element with the first element
        swap(arr[low], arr[randomIndex]);

        // Now choosing arr[low] as the pivot after the swap
        int pivot = arr[low];
        // Starting index for left subarray
        int i = low;
        // Starting index for right subarray
        int j = high;

        while (i < j) {
            /*  Move i to the right until we find an
                element greater than the pivot  */
            while (arr[i] <= pivot && i <= high - 1) {
                i++;
            }
            /*  Move j to the left until we find an
                element smaller than the pivot  */
            while (arr[j] > pivot && j >= low + 1) {
                j--;
            }
            /*  Swap elements at i and j if i is still
                less than j  */
            if (i < j) swap(arr[i], arr[j]);
        }
        
        // Pivot placed in correct position
        swap(arr[low], arr[j]);
        return j;
    }

    // Helper Function to perform the recursive quick sort
    void quickSortHelper(vector<int>& arr, int low, int high) {
        /*  Base case: If the array has one or no
            elements, it's already sorted  */
        if (low < high) {
            // Get the partition index
            int pIndex = partition(arr, low, high);
            // Sort the left subarray
            quickSortHelper(arr, low, pIndex - 1);
            // Sort the right subarray
            quickSortHelper(arr, pIndex + 1, high);
        }
    }
    
    // Function to perform quick sort on given array
    vector<int> quickSort(vector<int>& nums) {
        // Get the size of array
        int n = nums.size();
        
        // Perfrom quick sort
        quickSortHelper(nums, 0, n-1);
        
        // Return sorted array
        return nums;
    }
};

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Create an instance of Solution class
    Solution solution;

    // Function call to sort the array using quick sort
    vector<int> sortedArr = solution.quickSort(arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Approach:
// To implement Quick Sort, we will create two functions: quickSort() and partition().

// quickSort(arr[], low, high)
// Initial Setup: The low pointer points to the first index, and the high pointer points to the last index of the array.
// Partitioning: Use the partition() function to get the index where the pivot should be placed after sorting. This index, called the partition index, separates the left and right unsorted subarrays.
// Recursive Calls: After placing the pivot at the partition index, recursively call quickSort() for the left and right subarrays. The range of the left subarray will be [low to partition index - 1] and the range of the right subarray will be [partition index + 1 to high].
// Base Case: The recursion continues until the range becomes 1.
// partition(arr[], low, high)
// Select pivot (random element) and swap it with the first element.
// Use pointers i (low) and j (high). Move i forward to find element > pivot, and j backward to find element < pivot. Ensure i <= high - 1 and j >= low + 1.
// If i < j, swap arr[i] and arr[j].
// Continue until j < i.
// Swap pivot (arr[low]) with arr[j] and return j as partition index.