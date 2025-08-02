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
    vector<vector<int>> ans;
public:
    void traverse(TreeNode* root, int targetSum, int temp, vector<int> array){
        if(!root) return;
        
        temp += root->val;
        array.push_back(root->val);

        if(!root->left && !root->right){
            if(temp == targetSum)
                ans.push_back(array);
            return;
        }

        traverse(root->left,targetSum,temp,array);
        traverse(root->right,targetSum,temp,array);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> array;
        traverse(root,targetSum,0,array);
        return ans;
    }
};