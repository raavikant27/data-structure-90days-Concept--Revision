
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        // Number of subarrays
        int cnt = 0;

        // starting index i
        for (int i = 0; i < n; i++) {
            // ending index j
            for (int j = i; j < n; j++) {

                // calculate the sum of subarray [i...j]
                int sum = 0;
                for (int K = i; K <= j; K++)
                    sum += nums[K];

                // Increase the count if sum == k:
                if (sum == k)
                    cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 1, 2, 4};
    int k = 6;
    // Function call to find the result
    int cnt = solution.subarraySum(nums, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
