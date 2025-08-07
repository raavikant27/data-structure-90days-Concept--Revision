// Pattern 7


// 136

// 100
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



//     *
//    ***
//   *****
//  *******
// *********


// Print the pattern in the function given to you.


class Solution {
public:
    void pattern7(int n) {
        for (int i = 0; i < n; i++) {
            // Print spaces
            for (int j = 1; j <= n - i - 1; j++) {
                cout << " ";
            }

            // Print stars
            for (int j = 1; j <= 2 * i + 1; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};