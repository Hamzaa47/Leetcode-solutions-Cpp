/*
----------------------------------------------------------
🔗 Problem: Employee Bonus
📝 Link: https://leetcode.com/problems/employee-bonus/

🧠 Approach:
We use a LEFT OUTER JOIN between `Employee` and `Bonus` using employee ID.
This ensures we get all employees — even if they don’t have a bonus.
We filter the result to show:
- those with bonus < 1000
- or no bonus at all (`bonus IS NULL`)

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

# Write your MySQL query statement below
SELECT employee.name, bonus
FROM Employee
LEFT OUTER JOIN Bonus ON employee.empId = bonus.empId
WHERE bonus < 1000 OR bonus IS NULL;

-- ✅ Solved on: 1 Jul 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
