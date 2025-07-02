/*
----------------------------------------------------------
🔗 Problem: Convert Sorted Array to Binary Search Tree
📝 Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

🧠 Approach:
We use a divide-and-conquer strategy to build a balanced BST:
- Pick the middle element as root to ensure balance.
- Recursively build left and right subtrees.

This guarantees height-balanced property because mid is always centered.

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(log n) (due to recursion stack)
----------------------------------------------------------
*/

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return nullptr;
        return helper(nums, 0, nums.size() - 1);
    }

    TreeNode* helper(vector<int>& nums, int start, int end) {
        if (start > end) return nullptr;

        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = helper(nums, start, mid - 1);
        root->right = helper(nums, mid + 1, end);

        return root;
    }
};

// ✅ Solved on: 21 Jan 2025
// 🚀 Difficulty: Easy
// 🧩 Tags: Array, Divide and Conquer, Tree, Binary Search Tree, Binary Tree
