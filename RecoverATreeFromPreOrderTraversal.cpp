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
    TreeNode *recoverFromPreorder(string traversal)
    {
        stack<TreeNode *> s;
        int i = 0;

        while (i < traversal.length())
        {
            int depth = 0;

            while (i < traversal.length() && traversal[i] == '-')
            {
                depth++;
                i++;
            }

            int j = i;
            while (j < traversal.length() && isdigit(traversal[j]))
            {
                j++;
            }

            int val = stoi(traversal.substr(i, j - i));
            TreeNode *node = new TreeNode(val);
            i = j;

            while (s.size() > depth)
            {
                s.pop();
            }

            if (!s.empty())
            {
                if (s.top()->left == nullptr)
                {
                    s.top()->left = node;
                }
                else
                {
                    s.top()->right = node;
                }
            }

            s.push(node);
        }

        while (s.size() > 1)
        {
            s.pop();
        }

        return s.top();
    }
};
