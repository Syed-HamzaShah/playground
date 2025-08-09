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
    vector<int> array;
public:
    void traverse(TreeNode* root){
        if(!root) return;
        traverse(root->left);
        array.push_back(root->val);
        traverse(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        traverse(root);
        return array[k-1];
    }
};