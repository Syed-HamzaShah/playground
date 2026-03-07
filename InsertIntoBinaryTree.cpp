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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            TreeNode* ans = new TreeNode(val); 
            return ans;
        }

        TreeNode* temp = root;

        while(temp != nullptr){
            if(temp->val > val){
                if(!temp->left){
                    temp->left = new TreeNode(val);
                    return root;
                }
                temp = temp->left;
            }
            else{
                if(!temp->right){
                    temp->right = new TreeNode(val);
                    return root;
                }
                temp = temp->right;
            }
        }
        return root;
    }
};