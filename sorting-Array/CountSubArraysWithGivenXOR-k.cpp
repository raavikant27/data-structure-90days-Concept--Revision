
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to count the number of subarrays with XOR k
    int subarraysWithXorK(vector<int>& nums, int k) {
        int n = nums.size(); 
        int cnt = 0;

        // Step 1: Generate subarrays
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int xorr = 0;
                /* Step 2: Calculate XOR of 
                   all elements in the subarray */
                for (int K = i; K <= j; K++) {
                    xorr = xorr ^ nums[K];
                }
                // Step 3: Check XOR and count
                if (xorr == k) cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> a = {4, 2, 2, 6, 4}; 
    int k = 6; 

    // Create an instance of the Solution class
    Solution solution;

    // Function call to get the result
    int ans = solution.subarraysWithXorK(a, k);
  
    cout << "The number of subarrays with XOR k is: " << ans << "\n";
    return 0;
}
