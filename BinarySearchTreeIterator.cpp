Intuition
A Binary Search Tree (BST) has the property that an in-order traversal visits nodes in ascending order.
If we want an iterator that gives us the next smallest element each time, we can simply perform an in-order traversal and store the results in a queue.
Then, next() just pops from the queue, and hasNext() checks if the queue is empty.

Approach
Perform a full in-order traversal of the BST starting from the root.
Recursively visit left subtree, push the current node value, then visit the right subtree.

Store the values in a queue so we maintain the sorted order of elements.

The next() method:
Return the front element from the queue and remove it.

The hasNext() method:
Check whether the queue is non-empty.>

Complexity
Time complexity:
Constructor: 𝑂(𝑛) to traverse and push all 𝑛 nodes into the queue.
next() and hasNext(): 𝑂(1)

Space complexity: 𝑂(𝑛)
O(n) to store all elements of the BST in the queue.

Code
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
class BSTIterator {
    queue<int> q;

    void traverse(TreeNode* root){
        if(!root) return;

        if(root->left) traverse(root->left);
        q.push(root->val);
        if(root->right) traverse(root->right);
    }

public:
    BSTIterator(TreeNode* root) {
        traverse(root);
    }
    
    int next() {
        int temp = q.front();
        q.pop();
        return  temp;
    }
    
    bool hasNext() {
        return !q.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */