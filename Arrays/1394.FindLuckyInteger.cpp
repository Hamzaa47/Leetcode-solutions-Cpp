/*
----------------------------------------------------------
🔗 Problem: Find Lucky Integer in an Array
📝 Link: https://leetcode.com/problems/find-lucky-integer-in-an-array/

🧠 Approach:
- Use an unordered_map to count the frequency of each element.
- Traverse the array again, and for each number that satisfies:
  (frequency == value), update the result to max of such values.
- If no such number found, return -1.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(n)
----------------------------------------------------------
*/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> hash;
        int num = -1;
        for (int i = 0; i < arr.size(); i++) {
            hash[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (hash[arr[i]] == arr[i]) {
                num = max(num, arr[i]);
            }
        }
        return num;
    }
};

// ✅ Solved on: 05 Jul 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Array, Hash Table, Counting
