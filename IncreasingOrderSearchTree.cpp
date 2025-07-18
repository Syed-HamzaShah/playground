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
    queue<TreeNode*> q;
public:
    void traverse(TreeNode*& root){
        if(!root) return;
        traverse(root->left);
        q.push(root);
        traverse(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        traverse(root);
        TreeNode* newHead = new TreeNode(0);
        TreeNode* prev = newHead;

        while (!q.empty()) {
            TreeNode* curr = q.front(); q.pop();
            curr->left = nullptr;    
            prev->right = curr;           
            prev = curr;                  
        }

        return newHead->right;
    }
};