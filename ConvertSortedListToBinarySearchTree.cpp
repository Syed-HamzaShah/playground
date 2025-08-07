/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* createTree(vector<int> array, int start, int end){
        if(start > end) return nullptr;

        int mid = (start + end) / 2;
        TreeNode* root = new TreeNode(array[mid]);
        root->left = createTree(array,start,mid-1);
        root->right = createTree(array,mid+1,end);

        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return nullptr;
        vector<int> array;
        ListNode* temp = head;

        while(temp){
            array.push_back(temp->val);
            temp = temp->next;
        }
               
        return createTree(array,0,array.size()-1);
    }
};