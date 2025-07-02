/*
----------------------------------------------------------
🔗 Problem: Summary Ranges
📝 Link: https://leetcode.com/problems/summary-ranges/

🧠 Approach:
We iterate through the array and build ranges:
- If two consecutive numbers are not sequential (i.e., not `num[i]+1 == num[i+1]`),
  we complete the current range and start a new one.
- Edge case: we handle the last element specifically.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1) (excluding result vector)
----------------------------------------------------------
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> range;
        if (nums.size() == 0) return range;
        if (nums.size() == 1) return {to_string(nums[0])};

        int start = nums[0];
        for (int i = 0; i < nums.size() - 1; i++) {
            string temp;
            if (nums[i] + 1 != nums[i + 1]) {
                if (nums[i] == start) {
                    range.push_back(to_string(nums[i]));
                } else {
                    temp = to_string(start) + "->" + to_string(nums[i]);
                    range.push_back(temp);
                }
                start = nums[i + 1];
            }

            // Handle last pair
            if (i == nums.size() - 2) {
                if (nums[i] + 1 != nums[i + 1]) {
                    range.push_back(to_string(nums[i + 1]));
                } else {
                    temp = to_string(start) + "->" + to_string(nums[i + 1]);
                    range.push_back(temp);
                }
            }
        }

        return range;
    }
};

// ✅ Solved on: 22 Jan 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Array
