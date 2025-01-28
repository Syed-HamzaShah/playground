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
    void traversal(vector<int> &ans, TreeNode *node)
    {
        if (node == nullptr)
            return;

        traversal(ans, node->left);
        ans.push_back(node->val);
        traversal(ans, node->right);
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == nullptr)
            return ans;

        traversal(ans, root);

        return ans;
    }
};