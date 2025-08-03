

#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    // Function to reverse array using two pointers
    void reverse(int arr[], int n) {
        int p1 = 0, p2 = n - 1;
        /* Swap elements pointed by p1 and p2 
        until they meet in the middle */
        while (p1 < p2) {
            int tmp = arr[p1];
            arr[p1] = arr[p2];
            arr[p2] = tmp;
            p1++;
            p2--;
        }
        // Return
        return;
    }
};
 
// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    
    // Creating instance of Solution class
    Solution solution;
    cout << "Original array: ";
    printArray(arr, n);
    
    // Function call to reverse the array 
    solution.reverse(arr, n); 
    cout << "Reversed array: ";
    printArray(arr, n);
    
    return 0;
}

// understand only logic nd keep implement it-self
// Approach:
// Initialize a pointer p1 at the first index and another pointer p2 at the last index of the array.
// Swap the elements pointed by p1 and p2 and increment p1 by 1 while decrementing p2 by 1 simultaneously.
// Repeat the process for the first n/2 elements, where n is the length of the array.