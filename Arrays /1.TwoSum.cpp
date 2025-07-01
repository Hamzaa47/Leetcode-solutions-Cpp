/*
----------------------------------------------------------
🔗 Problem: Two Sum
📝 Link: https://leetcode.com/problems/two-sum/

🧠 Approach:
We use an unordered_map to store each element as we iterate.
At each step, we check if the complement (target - current number) already exists in the map.
If it does, we return both indices.

This method avoids the O(n²) brute-force approach and works in linear time.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(n)
----------------------------------------------------------
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.count(target - nums[i])) {
                return {i, hash[target - nums[i]]};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};

// ✅ Solved on: 23 Aug 2024
// 🚀 Difficulty: Easy
// 🧩 Tags: Array, Hash Table
