
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Helper function to perform linear search
    bool linearSearch(vector<int>& a, int num) {
        int n = a.size(); 
        // Traverse through the array 
        for (int i = 0; i < n; i++) {
            if (a[i] == num)
                return true;
        }
        return false;
    }

public:
    // Function to find the longest consecutive sequence
    int longestConsecutive(vector<int>& nums) {
        // If the array is empty
        if (nums.size() == 0) {
            return 0;
        }
        int n = nums.size();
        // Initialize the longest sequence length
        int longest = 1; 

        // Iterate through each element in the array
        for (int i = 0; i < n; i++) {
            // Current element
            int x = nums[i]; 
            // Count of the current sequence
            int cnt = 1; 

            // Search for consecutive numbers
            while (linearSearch(nums, x + 1) == true) {
                // Move to the next number in the sequence
                x += 1; 
                // Increment the count of the sequence
                cnt += 1; 
            }

            // Update the longest sequence length found so far
            longest = max(longest, cnt);
        }
        return longest;
    }
};

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2};

    // Create an instance of the Solution class
    Solution solution;

    // Function call for longest consecutive sequence
    int ans = solution.longestConsecutive(a);
    cout << "The longest consecutive sequence is " << ans << "\n"; 
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        // If the array is empty
        if (n == 0) return 0; 
    
        // Initialize the longest sequence length
        int longest = 1; 
        unordered_set<int> st;
    
        // Put all the array elements into the set
        for (int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
    
        /* Traverse the set to 
           find the longest sequence  */
        for (auto it : st) {
            // Check if 'it' is a starting number of a sequence
            if (st.find(it - 1) == st.end()) {
                // Initialize the count of the current sequence
                int cnt = 1; 
                // Starting element of the sequence
                int x = it; 
    
                // Find consecutive numbers in the set
                while (st.find(x + 1) != st.end()) {
                    // Move to the next element in the sequence
                    x = x + 1; 
                    // Increment the count of the sequence
                    cnt = cnt + 1; 
                }
                // Update the longest sequence length
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2}; 

    // Create an instance of solution class
    Solution solution; 
    // Function call for finding longest consecutive sequence
    int ans = solution.longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
approch-2
Approach
We will use two variables, cnt to store the length of the current sequence and longest to store the maximum length found.

First, all array elements are placed into a set data structure.

For each element x that can start a sequence (i.e., x - 1 does not exist in the set) we follow the below steps:

Initialize cnt to 1, indicating the starting element of a new sequence.
Utilize the set to search for consecutive elements such as x + 1, x + 2, and so on, to determine the maximum possible length of the current sequence. Update cnt accordingly.
Compare cnt with longest and update longest to hold the maximum value (longest = max(longest, cnt)).
Finally, longest will contain the length of the longest consecutive sequence found in the array.
