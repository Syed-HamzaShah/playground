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
    bool found = false;
public:
    void traverse(TreeNode* root, int targetSum, int temp){
        if(!root) return;
        
        temp += root->val;

        if(!root->left && !root->right){
            if(temp == targetSum)
                found = true;
            return;
        }

        traverse(root->left,targetSum,temp);
        traverse(root->right,targetSum,temp);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        traverse(root,targetSum,0);
        return found;
    }
};