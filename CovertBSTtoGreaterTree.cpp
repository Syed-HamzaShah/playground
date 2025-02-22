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
    int sum = 0;
    void leapoffaith(TreeNode *root)
    {
        if (root == nullptr)
            return;

        leapoffaith(root->right);

        sum += root->val;
        root->val = sum;

        leapoffaith(root->left);
    }

    TreeNode *convertBST(TreeNode *root)
    {
        leapoffaith(root);
        return root;
    }
};