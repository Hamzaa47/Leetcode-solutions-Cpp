/*
----------------------------------------------------------
🔗 Problem: Roman to Integer
📝 Link: https://leetcode.com/problems/roman-to-integer/

🧠 Approach:
- We map each Roman character to its integer value using an unordered_map.
- Then we iterate over the string:
   - If the current value is **greater than or equal to** the next one → we **add** it.
   - If it's **less than** the next one → we **subtract** it (like IV = 4, IX = 9).
- At the end, we return the final number.

⏱️ Time Complexity: O(n), where n = length of the string
📦 Space Complexity: O(1), since the map has only 7 fixed entries
----------------------------------------------------------
*/

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;

        // Mapping Roman characters to values
        unordered_map<char, int> value = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100},
            {'D', 500}, {'M', 1000}
        };

        // Traverse the Roman string
        for (int i = 0; i < s.size(); i++) {
            // Check if current character is less than the next one (like I before V or X)
            if (i < s.size() - 1 && value[s[i]] < value[s[i + 1]]) {
                num -= value[s[i]];  // Subtract if smaller
            } else {
                num += value[s[i]];  // Add otherwise
            }
        }

        return num;
    }
};

// ✅ Solved on: 28 June 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Hash Table, Math, String
