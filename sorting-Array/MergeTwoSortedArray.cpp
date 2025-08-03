#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to merge two sorted arrays nums1 and nums2
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // Declare a 3rd array and 2 pointers:
        vector<int> merged(m + n);
        int left = 0;
        int right = 0;
        int index = 0;

        /* Insert elements from nums1 and nums2 into
        merged array using left and right pointers*/
        while (left < m && right < n) {
            if (nums1[left] <= nums2[right]) {
                merged[index++] = nums1[left++];
            } else {
                merged[index++] = nums2[right++];
            }
        }

        // If right pointer reaches the end of nums2:
        while (left < m) {
            merged[index++] = nums1[left++];
        }

        // If left pointer reaches the end of nums1:
        while (right < n) {
            merged[index++] = nums2[right++];
        }

        /* Copy elements from merged array
        array back to nums1 and nums2*/
        for (int i = 0; i < m + n; i++) {
            nums1[i] = merged[i];
        }
    }
};

int main() {
    
    vector<int> nums1 = {-5, -2, 4, 5, 0, 0, 0};
    vector<int> nums2 = {-3, 1, 8};
    int m = 4, n = 3;

    // Create an instance of the Solution class
    Solution sol;

    sol.merge(nums1, m, nums2, n);

    // Output the merged arrays
    cout << "The merged arrays is:\n";
    cout << "nums1[] = ";
    for (int i = 0; i < m; i++) {
        cout << nums1[i] << " ";
    }
  
    cout << endl;

    return 0;
}
