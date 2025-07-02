/*
----------------------------------------------------------
🔗 Problem: Maximum Difference Between Even and Odd Frequency I
📝 Link: https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/

🧠 Approach:
We count the frequency of each character using an unordered_map.
Then we:
- Find the maximum frequency among characters with **odd frequency**
- Find the minimum frequency among characters with **even frequency**
Return the difference (maxOdd - minEven).

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1) — since character set is limited
----------------------------------------------------------
*/

class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> myHash;
        int maxOdd = 0, minEven = s.size();
        
        for (char ch : s) {
            myHash[ch]++;
        }

        for (auto& entry : myHash) {
            int freq = entry.second;
            if (freq % 2 == 1) {
                maxOdd = max(maxOdd, freq);
            } else {
                minEven = min(minEven, freq);
            }
        }
        
        return maxOdd - minEven;
    }
};

// ✅ Solved on: 14 Feb 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Hash Table, String, Counting
