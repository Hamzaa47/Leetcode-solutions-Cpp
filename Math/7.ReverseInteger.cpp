/*
----------------------------------------------------------
🔗 Problem: Reverse Integer
📝 Link: https://leetcode.com/problems/reverse-integer/

🧠 Approach:
- Handle INT_MIN separately to avoid abs overflow.
- Reverse digits using % and /.
- Check for potential overflow before multiplying:
  If rev > INT_MAX/10, or (rev == INT_MAX/10 and digit > 7), return 0.
- Do not use 64-bit integers (long long), as per the problem constraints.

⏱️ Time Complexity: O(log₁₀n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) {
            return 0;
        }        
        int n = abs(x);
        int rev = 0;
        while (n > 0) {
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && n % 10 > 7)) {
                return 0;
            }
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return x < 0 ? -rev : rev;
    }
};

// ✅ Solved on: 04 Jul 2025
// 🚀 Difficulty: Medium
// 🧩 Tags: Math
