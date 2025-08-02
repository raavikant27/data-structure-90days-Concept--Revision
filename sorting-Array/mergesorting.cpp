#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    // Function to merge two sorted halves of the array
    void merge(vector<int> &arr, int low, int mid, int high) {
        // Temporary array to store merged elements
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        // Loop until subarrays are exhausted
        while (left <= mid && right <= high) {
            // Compare left and right elements
            if (arr[left] <= arr[right]) {
                // Add left element to temp
                temp.push_back(arr[left]);
                // Move left pointer
                left++;
            }
            else {
                // Add right element to temp
                temp.push_back(arr[right]);
                // Move right pointer
                right++;
            }
        }

        // Adding the remaining elements of left half
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Adding the remaining elements of right half
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Transferring the sorted elements to arr
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }
    
    // Helper function to perform merge sort from low to high
    void mergeSortHelper(vector<int> &arr, int low, int high){
        // Base case: if the array has only one element
        if (low >= high)
            return;
        
        // Find the middle index
        int mid = (low + high) / 2;
        // Recursively sort the left half
        mergeSortHelper(arr, low, mid);
        // Recursively sort the right half
        mergeSortHelper(arr, mid + 1, high);
        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
    
    // Function to perform merge sort on the given array
    vector<int> mergeSort(vector<int> &nums) {
        int n = nums.size(); // SIze of array
        
        // Perform Merge sort on the whole array
        mergeSortHelper(nums, 0, n-1);
        
        // Return the sorted array
        return nums;
    }
};

int main(){
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Create an instance of the Solution class
    Solution sol;
    // Function call to sort the array
    vector<int> sortedArr = sol.mergeSort(arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << sortedArr[i] << " ";
    cout << endl;

    return 0;
}

// Intuition:
// Merge Sort is a powerful sorting algorithm that follows the divide-and-conquer approach. The array is divided into two equal halves until each sub-array contains only one element. Each pair of smaller sorted arrays is then merged into a larger sorted array.

// The algorithm consists of two main functions:

// merge():This function merges the two halves of the array, assuming both parts are already sorted.
// mergeSort():This function divides the array into 2 parts: low to mid and mid+1 to high where, low is the leftmost index of the array, high is the rightmost index of the array, and mid is the middle index of the array.
// By repeating these steps recursively, Merge Sort efficiently sorts the entire array.

// Approach:
// To implement Merge Sort, we will create two functions: mergeSort() and merge().

// mergeSort(arr[], low, high)

// Divide the Array: Split the given array into two halves by splitting the range. For any range from low to high, the splits will be low to mid and mid+1 to high, where mid = (low + high) / 2. This process continues until the range size is 1.
// Recursive Division: In mergeSort(), divide the array around the middle index by making recursive calls: mergeSort(arr, low, mid) for the left half and mergeSort(arr, mid+1, high) for the right half. Here, low is the leftmost index, high is the rightmost index, and mid is the middle index of the array.
// Base Case: To complete the recursive function, define the base case. The recursion ends when the array has only one element left, meaning low and high are the same, pointing to a single element. If low >= high, the function returns.
// merge(arr[], low, mid, high)

// Use a temporary array to store the elements of the two sorted halves after merging. The range of the left half is from low to mid and the range of the right half is from mid+1 to high.
// Use two pointers, left starting from low and right starting from mid+1. Using a while loop (while left <= mid && right <= high), compare the elements from each half and insert the smaller one into the temporary array. After the loop, any leftover elements in both halves are copied into the temporary array.
// Transfer the elements from the temporary array back to the original array in the range low to high.