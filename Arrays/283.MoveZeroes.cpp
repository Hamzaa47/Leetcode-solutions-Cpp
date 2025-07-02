/*
----------------------------------------------------------
🔗 Problem: Move Zeroes
📝 Link: https://leetcode.com/problems/move-zeroes/

🧠 Approach:
We use two pointers:
- `fast` scans every element
- `slow` tracks the position where the next non-zero should go

First, we shift all non-zero elements forward.
Then we fill the rest of the array with zeroes.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0; 

        for (int fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != 0) {
                nums[slow] = nums[fast];
                slow++;
            }
        }

        for (int i = slow; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

// ✅ Solved on: 23 Jan 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Array, Two Pointers
