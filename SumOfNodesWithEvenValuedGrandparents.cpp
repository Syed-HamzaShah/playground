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
    int ans = 0;
public:
    void traverse(TreeNode* root, int parent, int grandparent){
        if(parent != -1 && grandparent != -1 && grandparent % 2 == 0)
            ans += root->val;
        
        if(root->left)
            traverse(root->left, root->val, parent);
        
        if(root->right)
            traverse(root->right, root->val, parent);

        return;
    }

    int sumEvenGrandparent(TreeNode* root) {
        traverse(root, -1, -1);
        return ans;
    }
};