/*
----------------------------------------------------------
🔗 Problem: Missing Number
📝 Link: https://leetcode.com/problems/missing-number/

🧠 Approach:
We use the mathematical formula for the sum of first `n` natural numbers:  
`sum = n * (n + 1) / 2`

Then we subtract the actual sum of array elements from the expected sum to get the missing number.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int real = n * (n + 1) / 2;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        return real - sum;
    }
};

// ✅ Solved on: 22 Jan 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Array, Hash Table, Math, Binary Search, Bit Manipulation, Sorting
