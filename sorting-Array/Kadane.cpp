// The idea is to find out all the subarrays of the given array and while finding out the subarray calculate the sum of all the elements of that particular subarray. Finally, find out the maximum sum among them and that will be the result.

// Approach 
// Iterate in the array lets say i, this variable will select every possible starting index of the subarray. The possible starting indices can vary from index 0 to index n-1(n = size of the array).
// Inside the loop, run another loop(say j) that will signify the ending index of the subarray. For every subarray starting from the index i, the possible ending index can vary from index i to n-1(n = size of the array).
// After that for each subarray starting from index i and ending at index j, iterate again to calculate the sum of all the elements(of that particular subarray). Use a max variable to store the maximum sum so far and finally, return the max variable.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find maximum sum of subarrays
    int maxSubArray(vector<int>& nums) {
        
        /* Initialize maximum sum with 
        the smallest possible integer*/
        int maxi = INT_MIN; 

        // Iterate over each starting index of subarrays
        for (int i = 0; i < nums.size(); i++) {
            
            /* Iterate over each ending index
            of subarrays starting from i*/
            for (int j = i; j < nums.size(); j++) {
                
                // Variable to store the sum of the current subarray
                int sum = 0; 

                // Calculate the sum of subarray nums[i...j]
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }

                /* Update maxi with the maximum of its current 
                value and the sum of the current subarray*/
                maxi = max(maxi, sum);
                
            }
        }
        
        // Return the maximum subarray sum found
        return maxi; 
    }
};

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    //create an instance of Solution class
    Solution sol;
    
    int maxSum = sol.maxSubArray(arr);
    
    //Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
