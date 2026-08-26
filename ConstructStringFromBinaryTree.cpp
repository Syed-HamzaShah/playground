class Solution {
    string ans;

public:
    void traverse(TreeNode* root) {
        if (!root) return;

        ans += to_string(root->val);

        if (root->left || root->right) {
            ans += "(";
            traverse(root->left);
            ans += ")";
        }

        if (root->right) {
            ans += "(";
            traverse(root->right);
            ans += ")";
        }
    }

    string tree2str(TreeNode* root) {
        ans = "";

        if (root)
            traverse(root);

        return ans;
    }
};