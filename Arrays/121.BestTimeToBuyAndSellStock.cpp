/*
----------------------------------------------------------
🔗 Problem: Best Time to Buy and Sell Stock
📝 Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

🧠 Approach:
We keep track of the minimum price so far (`buy`) and calculate the potential profit if we sell at current price.
Update max profit when a better one is found.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for (int sell : prices) {
            if (sell > buy) {
                profit = max(profit, sell - buy);
            } else {
                buy = sell;
            }
        }
        return profit;
    }
};

// ✅ Solved on: 21 Jan 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Array, Dynamic Programming
