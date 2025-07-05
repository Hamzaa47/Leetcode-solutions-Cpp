/*
----------------------------------------------------------
🔗 Problem: Game Play Analysis I  
📝 Link: https://leetcode.com/problems/game-play-analysis-i/

🧠 Approach:
- Use MIN(event_date) with GROUP BY player_id to get each player's first login date.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
----------------------------------------------------------
*/

SELECT player_id, MIN(event_date) AS first_login
FROM Activity
GROUP BY player_id;

-- ✅ Solved on: 05 Jul 2025
-- 🚀 Difficulty: Easy
-- 🧩 Tags: Database
