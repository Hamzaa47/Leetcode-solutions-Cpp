/*
----------------------------------------------------------
🔗 Problem: Palindrome Number
📝 Link: https://leetcode.com/problems/palindrome-number/

🧠 Approach:
- Negative numbers are not palindrome.
- Reverse the number using mod and division.
- Compare reversed number with original.

⏱️ Time Complexity: O(log₁₀n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int n = x;
        long int reverse = 0;

        while (n > 0) {
            reverse = reverse * 10 + n % 10;
            n = n / 10;
        }

        return reverse == x;
    }
};

// ✅ Solved on: 04 Jul 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Math
