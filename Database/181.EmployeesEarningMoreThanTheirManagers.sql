/*
----------------------------------------------------------
🔗 Problem: Employees Earning More Than Their Managers
📝 Link: https://leetcode.com/problems/employees-earning-more-than-their-managers/

🧠 Approach:
We use a self-join on the Employee table:
- Join each employee `e` with their manager `m` using `e.managerId = m.id`
- Then filter where employee’s salary is greater than manager’s salary.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e
LEFT JOIN Employee m ON m.id = e.managerId
WHERE e.salary > m.salary;

-- ✅ Solved on: 1 Jul 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
