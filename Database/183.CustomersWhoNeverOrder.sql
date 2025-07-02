/*
----------------------------------------------------------
🔗 Problem: Customers Who Never Order
📝 Link: https://leetcode.com/problems/customers-who-never-order/

🧠 Approach:
We perform a LEFT JOIN from Customers to Orders using customer ID.
If no matching order exists, the order ID will be NULL in the result.
So we filter with `WHERE o.id IS NULL` to find customers who never placed any order.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

# Write your MySQL query statement below
SELECT c.name AS customers
FROM Customers c
LEFT JOIN Orders o ON c.id = o.customerId
WHERE o.id IS NULL;

-- ✅ Solved on: 1 Jul 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
