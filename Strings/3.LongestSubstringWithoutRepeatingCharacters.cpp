/*
----------------------------------------------------------
🔗 Problem: Longest Substring Without Repeating Characters
📝 Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

🧠 Approach:
- Use a sliding window and an unordered_map to track the last index of characters.
- `start` points to the beginning of the current window.
- As we iterate over the string:
   - If the current character is already in the map **and** its last index is within the current window,
     we shift the start to **just after the previous occurrence**.
   - Otherwise, we increase the current length of the window.
- After each character, we update the maximum length found so far.

⏱️ Time Complexity: O(n), where n is the length of the string
📦 Space Complexity: O(k), where k is the number of unique characters (at most 128 for ASCII)
----------------------------------------------------------
*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> myHash;  // To store last index of characters
        int maxLen = 0;  // To track maximum length of substring found
        int len = 0;     // Current window length
        int start = 0;   // Start index of current window

        for (int i = 0; i < s.size(); i++) {
            // If character is already seen and lies inside the current window
            if (myHash.find(s[i]) != myHash.end() && myHash[s[i]] >= start) {
                start = myHash[s[i]] + 1;         // Shift start to avoid repeating char
                len = i - myHash[s[i]];           // Update current window length
                myHash[s[i]] = i;                 // Update latest index of the character
                continue;
            }

            myHash[s[i]] = i;      // Save index of current character
            len++;                 // Extend window size
            maxLen = max(maxLen, len); // Update max if this window is bigger
        }

        return maxLen;
    }
};

// ✅ Solved on: 04 Mar 2025
// 🚀 Difficulty: Medium
// 🧩 Tags: Strings, Sliding Window, Hash Table
