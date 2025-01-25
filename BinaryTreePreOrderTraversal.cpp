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
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> s;
        s.push(nullptr);
        TreeNode *ptr = root;

        while (ptr != nullptr)
        {
            ans.push_back(ptr->val);
            if (ptr->right != nullptr)
                s.push(ptr->right);

            if (ptr->left != nullptr)
            {
                ptr = ptr->left;
            }
            else
            {
                ptr = s.top();
                s.pop();
            }
        }

        return ans;
    }
};