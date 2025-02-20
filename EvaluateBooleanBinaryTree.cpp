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
class Solution
{
public:
    int eval(TreeNode *root)
    {
        if (!root->left && !root->right)
            return root->val;
        int a1, a2;
        if (root->left && root->right)
        {
            a1 = eval(root->left);
            a2 = eval(root->right);
        }
        return root->val == 2 ? a1 | a2 : a1 & a2;
    }

    bool evaluateTree(TreeNode *root)
    {
        int ans = eval(root);
        return ans == 1 ? true : false;
    }
};