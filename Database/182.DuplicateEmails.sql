/*
----------------------------------------------------------
🔗 Problem: Duplicate Emails
📝 Link: https://leetcode.com/problems/duplicate-emails/

🧠 Approach:
We group the rows by email and count how many times each email appears.
If the count is greater than 1, it means it's a duplicate.

The `HAVING` clause is used with aggregate functions to filter groups.

⏱️ Time Complexity: O(n log n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

# Write your MySQL query statement below
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;

-- ✅ Solved on: 1 Jul 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
