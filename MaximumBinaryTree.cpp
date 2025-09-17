/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* leapOfFaith(vector<int>& nums, int i, int j) {
        if (i >= j) return nullptr;
        int value = nums[i];
        int index = i;

        for (int k = i; k < j; k++) {
            if (nums[k] > value) {
                value = nums[k];
                index = k;
            }
        }

        TreeNode* node = new TreeNode(value);
        node->left = leapOfFaith(nums, i, index);
        node->right = leapOfFaith(nums, index + 1, j);

        return node;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return leapOfFaith(nums,0,nums.size());
    }
};