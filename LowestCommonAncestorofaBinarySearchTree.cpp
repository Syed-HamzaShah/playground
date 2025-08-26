/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* leapOfFaith(TreeNode* root,int low, int high){
        if(low <= root->val && high >= root->val) 
            return root;
        else if(low > root->val && high > root->val)
            return leapOfFaith(root->right, low,high);
        else if(low < root->val && high < root->val)
            return leapOfFaith(root->left,low,high);
        return root->right? nullptr :root->left;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int low  = p->val > q->val ? q->val: p->val;
        int high = low == p->val ? q->val: p->val;
        
        return leapOfFaith(root,low,high);
    }
};