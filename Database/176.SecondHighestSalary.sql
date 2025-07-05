/*
----------------------------------------------------------
🔗 Problem: Second Highest Salary
📝 Link: https://leetcode.com/problems/second-highest-salary/

🧠 Approach:
- First, find the maximum salary using a subquery.
- Then exclude that from the outer query and find the max of remaining salaries.
- Note: If there is no second distinct salary, this query returns NULL.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary <> (
    SELECT MAX(salary)
    FROM Employee
);

-- ✅ Solved on: 05 Jul 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
