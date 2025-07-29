class Solution {
    // Function to generate a single row of Pascal's Triangle
    generateRow(row) {
        let ans = 1;
        let ansRow = [];
        
        // Inserting the 1st element
        ansRow.push(1);

        // Calculate the rest of the elements
        for (let col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push(ans);
        }
        
        return ansRow; // Return the computed row
    }

    // Function to generate Pascal's Triangle up to n rows
    pascalTriangleIII(n) {
        let pascalTriangle = [];

        // Compute the entire Pascal's Triangle
        for (let row = 1; row <= n; row++) {
            pascalTriangle.push(this.generateRow(row));
        }
        
        //return the pascalTriangle
        return pascalTriangle;
    }
}

const n = 5;
const sol = new Solution();

// Generate Pascal's Triangle with n rows
const pascalTriangle = sol.pascalTriangleIII(n);

// Output the Pascal's Triangle
pascalTriangle.forEach(row => {
    row.forEach(element => {
        process.stdout.write(element + " ");
    });
    console.log();
});
