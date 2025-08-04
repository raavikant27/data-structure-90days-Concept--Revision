Iterate in the array lets say i, this variable will select every possible starting index of the subarray. The possible starting indices can vary from index 0 to index n-1(n = size of the array).
Inside the loop, run another loop(say j) that will signify the ending index of the subarray. For every subarray starting from the index i, the possible ending index can vary from index i to n-1(n = size of the array).
After that for each subarray starting from index i and ending at index j, iterate again to calculate the sum of all the elements(of that particular subarray). Use a max variable to store the maximum sum so far and finally, return the max variable.


approch-2
Approach 
Iterate in the array lets say i to select every possible starting index of the subarray. The possible starting indices can vary from index 0 to index n-1(n is the array size).
Inside the loop, iterate again lets say j that will signify the ending index as well as the current element of the subarray. For every subarray starting from index i, the possible ending index can vary from index i to n-1(n is size of the array).
Inside loop j, keep adding the current element to the sum of the previous subarray. Among all the sums, the maximum one will be the answer and return it.

apprcoh-3
Iterate in the array using a variable i & while iterating add the elements to the sum variable and consider the maximum one.
If at any point the sum becomes negative, reset the sum to 0 as that will be not considered as a part of our answer. Finally, return the maximum sum.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find maximum sum of subarrays
    int maxSubArray(vector<int>& nums) {
        
        // maximum sum
        long long maxi = LLONG_MIN; 
        
        // current sum of subarray
        long long sum = 0; 
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            
            // Add current element to the sum
            sum += nums[i]; 
            
            // Update maxi if current sum is greater
            if (sum > maxi) {
                maxi = sum; 
            }
            
            // Reset sum to 0 if it becomes negative
            if (sum < 0) {
                sum = 0; 
            }
        }
        
        // Return the maximum subarray sum found
        return maxi;
    }
};

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    // Create an instance of Solution class
    Solution sol;

    int maxSum = sol.maxSubArray(arr);

    // Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}
