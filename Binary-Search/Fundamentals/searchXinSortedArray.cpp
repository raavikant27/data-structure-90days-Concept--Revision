// Approach:
// Two pointers are set up to define the search space — one pointing to the beginning of the array and the other to the end.
// The middle element of the current search space is found and the search space is repeatedly divided in half:
// If the middle element matches the target, the index is returned.
// If the target is greater than the middle element, the search space is narrowed to the right half.
// If the target is smaller, the search space is narrowed to the left half.
// If the loop ends without finding the target, return -1 indicating that the target is not present in the array.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the given target in a sorted array
    int search(vector<int>& nums, int target) {
        int n = nums.size(); // Size of array 
        
        // Pointers to define the search space
        int low = 0, high = n-1;

        // Until the search space is not empty
        while (low <= high) {
            // Find the middle element
            int mid = (low + high) / 2; 

            // If it matches the target
            if (nums[mid] == target) 
                return mid; 
                
            // If the target is greater than middle element 
            else if (target > nums[mid]) 
                low = mid + 1; 
                
            // Otherwise
            else 
                high = mid - 1; 
        }

        // If the target is not found
        return -1; 
    }
};

int main() {
    vector<int> a = {-1, 0, 3, 5, 9, 12}; 
    int target = 9; 

    // Creating an instance of Solution class
    Solution sol; 

    // Function call to find the given target in a sorted array
    int ind = sol.search(a, target); 
    
    if(ind == -1) 
        cout << "The target is not present." << endl;
    else 
        cout << "The target is at index: " << ind << endl;
    
    return 0;
}

tc- 0(log(N));
sc-0(1);