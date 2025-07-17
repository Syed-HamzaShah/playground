class Solution {
    queue<TreeNode*> q;
public:
    void tarverse(TreeNode* root){
        if (!root) return;
        q.push(root);
        tarverse(root->left);
        tarverse(root->right);
    }

    void flatten(TreeNode* root) {
        tarverse(root);
        TreeNode* prev = nullptr;

        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            if (prev) {
                prev->left = nullptr;
                prev->right = curr;
            }
            prev = curr;
        }

        // For the last node, ensure it ends properly
        if (prev) {
            prev->left = nullptr;
            prev->right = nullptr;
        }
    }
};
