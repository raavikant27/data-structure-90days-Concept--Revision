
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



// Intuition
// One simple approach is to look for sequences of consecutive numbers by utilising linear search in the array. For each number 𝑥 in the array, we'll check if the next numbers like 𝑥+1, 𝑥+2, 𝑥+3, and so on, are also in the array. This is like checking if we can build a chain of numbers that follow each other directly. By doing this for every number in the array, we can find the longest chain of consecutive numbers. Finally, we'll find the length of the longest chain among all the numbers in the array.

// Approach
// As you iterate through each number in the array, begin by checking if consecutive numbers like ( x+1, x+2, x+3 ), and so on, exist in the array. The occurrence of the next consecutive number can be checked by using linear search.
// When you find consecutive numbers, start counting them using a counter. Increment this counter each time you find the next consecutive number in the sequence.
// This counter effectively keeps track of how long the current consecutive sequence is as you move through the array and find more consecutive numbers.