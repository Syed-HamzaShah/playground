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
    int traverse(TreeNode* root){
        if(!root) return 0;

        int one = traverse(root->left);
        int two = traverse(root->right);

        if(root->val >= one && root->val >= two)
            ans++;

        return one > two? max(root->val, one) : max(root->val, two);    
    }

    int countDominantNodes(TreeNode* root) {
        int value = traverse(root);
        return ans;
    }
};