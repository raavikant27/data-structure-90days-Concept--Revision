#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to check if an array is sorted
    bool arraySortedOrNot(int arr[], int n) {
        // Iterate through the array
        for (int i = 0; i < n - 1; i++) {
            
            // Compare each element with the next one
            if (arr[i] > arr[i + 1]) {
                /* If any element is greater than the next one, 
                the array is not sorted */
                return false;
            }
        }
        
        // If no such pair is found, array is sorted
        return true; 
    }
};

// Driver code
int main() {
    // Creating an instance of solution class
    Solution solution;
    
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    
    // Function call to check if the array is sorted 
    bool sorted = solution.arraySortedOrNot(arr, n);
    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}