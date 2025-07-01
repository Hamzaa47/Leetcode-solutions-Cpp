/*
----------------------------------------------------------
🔗 Problem: Container With Most Water
📝 Link: https://leetcode.com/problems/container-with-most-water/

🧠 Approach:
We use the two-pointer technique to maximize the area.
Start with two pointers: one at the beginning and one at the end.
At each step, calculate the area = width × min height,
and move the pointer pointing to the shorter line inward.

Why?
Because the height is limited by the shorter side,
so to increase area, we try to find a taller line.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int Area = 0;
        int lp = 0, rp = height.size() - 1;
        
        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            Area = max(Area, w * ht);
            
            // Move the pointer with smaller height inward
            height[lp] < height[rp] ? lp++ : rp--;
        }

        return Area;
    }
};

// ✅ Solved on: 14 Nov 2024
// 🚀 Difficulty: Medium
// 🧩 Tags: Array, Two Pointers, Greedy
