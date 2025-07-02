/*
----------------------------------------------------------
🔗 Problem: Delete Duplicate Emails
📝 Link: https://leetcode.com/problems/delete-duplicate-emails/

🧠 Approach:
We use a self-join on the Person table where two entries have the same email,
but different IDs. To keep only the lowest ID per email, we delete the one with the higher ID.

`p.id > d.id` ensures we keep the earliest record.

⏱️ Time Complexity: O(n²) in worst case (due to self-join)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

# Write your MySQL query statement below
DELETE p
FROM Person p, Person d
WHERE p.email = d.email AND p.id > d.id;

-- ✅ Solved on: 7 Feb 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
