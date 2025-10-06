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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return root;
        
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            vector<TreeNode*> nodes;  // store all nodes at current level

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                nodes.push_back(curr);

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }

            // Reverse node values on odd levels
            if (level % 2 == 1) {
                int i = 0, j = nodes.size() - 1;
                while (i < j) {
                    swap(nodes[i]->val, nodes[j]->val);
                    i++;
                    j--;
                }
            }

            level++;
        }

        return root;
    }
};
