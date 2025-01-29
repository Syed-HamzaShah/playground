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
    bool isUnivalTree(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        int value = root->val;

        stack<TreeNode *> s;
        s.push(root);

        while (!s.empty())
        {
            TreeNode *ptr = s.top();
            s.pop();

            if (ptr->val != value)
                return false;

            if (ptr->right != nullptr)
                s.push(ptr->right);
            if (ptr->left != nullptr)
                s.push(ptr->left);
        }

        return true;
    }
};