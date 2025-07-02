/*
----------------------------------------------------------
🔗 Problem: Combine Two Tables
📝 Link: https://leetcode.com/problems/combine-two-tables/

🧠 Approach:
We use a LEFT JOIN to merge data from `Person` and `Address` using the `personId`.
This ensures that we include all people — even those who don't have an address.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

# Write your MySQL query statement below
SELECT firstName, lastName, city, state
FROM Person
LEFT JOIN Address ON Person.personId = Address.personId;

-- ✅ Solved on: 1 Jul 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
