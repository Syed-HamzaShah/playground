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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        int maxSum = INT_MIN;
        int maxSumLevel = 0;
        int level = 1;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(sum > maxSum){
                maxSumLevel = level;
                maxSum = sum;
            }
            level++;
        }
        
        
        return maxSumLevel;
    }
};