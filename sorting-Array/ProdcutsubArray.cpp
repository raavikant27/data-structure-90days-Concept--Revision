#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find maximum product subarray
    int maxProduct(vector<int>& nums) {
        
        // Initialize result to minimum possible integer
        int result = INT_MIN; 
        
        // Iterate through all subarrays 
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                int prod = 1;
                
                // Calculate product of subarray 
                for (int k = i; k <= j; k++) {
                    prod *= nums[k];
                }
                
                // Update the result with maximum product found
                result = max(result, prod);
            }
        }
        
        // Return the maximum product found
        return result;
    }
};

int main() {
    vector<int> nums = {4, 5, 3, 7, 1, 2};
    
    // Create an instance of the Solution class
    Solution sol;

    int maxProd = sol.maxProduct(nums);
    
    // Print the result
    cout << "The maximum product subarray: " << maxProd << endl;
    
    return 0;
}
