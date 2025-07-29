class Solution {
    // Function to find quadruplets with sum equal to target
    fourSum(nums, target) {
        const n = nums.length;
        const resultSet = new Set();
        
        // Checking all possible quadruplets
        for (let i = 0; i < n; i++) {
            for (let j = i + 1; j < n; j++) {
                for (let k = j + 1; k < n; k++) {
                    for (let l = k + 1; l < n; l++) {
                        // Calculate the sum of the current quadruplet
                        const sum = nums[i] + nums[j] + nums[k] + nums[l];
                        
                        // Check if the sum matches the target
                        if (sum === target) {
                            const temp = [nums[i], nums[j], nums[k], nums[l]];
                            // Sort the quadruplet to ensure uniqueness
                            temp.sort((a, b) => a - b);
                            resultSet.add(temp.join(',')); // Use join to store as unique string
                        }
                    }
                }
            }
        }
        
        // Convert set back to array of arrays (unique quadruplets)
        const ans = Array.from(resultSet).map(item => item.split(',').map(Number));
        return ans;
    }
}

// Sample usage
const nums = [4, 3, 3, 4, 4, 2, 1, 2, 1, 1];
const target = 9;

// Create an instance of Solution class
const sol = new Solution();
const ans = sol.fourSum(nums, target);

// Print the result
console.log("The quadruplets are:");
ans.forEach(quadruplet => {
    console.log(`[${quadruplet.join(' ')}]`);
});