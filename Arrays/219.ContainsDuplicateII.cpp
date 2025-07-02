/*
----------------------------------------------------------
🔗 Problem: Contains Duplicate II
📝 Link: https://leetcode.com/problems/contains-duplicate-ii/

🧠 Approach:
We use an unordered_map to store the last seen index of each number.
If the same number appears again within a distance ≤ k, we return true.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(n)
----------------------------------------------------------
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> duplicate;
        for (int i = 0; i < nums.size(); i++) {
            if (duplicate.count(nums[i]) > 0) {
                if ((i - duplicate[nums[i]]) <= k)
                    return true;
            }
            duplicate[nums[i]] = i;
        }
        return false;
    }
};

// ✅ Solved on: 21 Jan 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Array, Hash Table, Sliding Window
