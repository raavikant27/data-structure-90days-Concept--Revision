class Solution {
    /* Function to find two indices in the array `nums`
       such that their elements sum up to `target`.
    */
    twoSum(nums, target) {
        
        const n = nums.length;
        //create ans array to store ans
        let ans = [0, 0];
        
        for (let i = 0; i < n; i++) {
            for (let j = i + 1; j < n; j++) {
                
                 /* if nums[i] + nums[j] is equal to 
                   target put i and j in ans */
                if (nums[i] + nums[j] === target) {
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
                
            }
        }
        
        //Return {-1, -1} if no such pair is found
        return [-1, -1];
    }
}

const nums = [2, 6, 5, 8, 11];
const target = 14;

// Create an instance of the Solution class
const sol = new Solution();

// Call the twoSum method to find the indices
const ans = sol.twoSum(nums, target);

console.log(`This is the answer: [${ans[0]}, ${ans[1]}]`);
