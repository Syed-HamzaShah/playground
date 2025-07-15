#include <iostream>
using namespace std;

// Define the Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Define the BST class
class BST {
private:
    Node* root;

    // Helper functions (private)
    Node* insert(Node* node, int key) {
        if (node == nullptr) return new Node(key);
        if (key < node->data) node->left = insert(node->left, key);
        else if (key > node->data) node->right = insert(node->right, key);
        return node;
    }

    bool search(Node* node, int key) {
        if (node == nullptr) return false;
        if (node->data == key) return true;
        if (key < node->data) return search(node->left, key);
        else return search(node->right, key);
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) node = node->left;
        return node;
    }

    Node* deleteNode(Node* node, int key) {
        if (node == nullptr) return node;
        if (key < node->data) node->left = deleteNode(node->left, key);
        else if (key > node->data) node->right = deleteNode(node->right, key);
        else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    int height(Node* node) {
        if (node == nullptr) return -1;
        return 1 + max(height(node->left), height(node->right));
    }

    int countNodes(Node* node) {
        if (node == nullptr) return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    int countLeaves(Node* node) {
        if (node == nullptr) return 0;
        if (node->left == nullptr && node->right == nullptr) return 1;
        return countLeaves(node->left) + countLeaves(node->right);
    }

    void inorder(Node* node) {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    void preorder(Node* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    void postorder(Node* node) {
        if (node != nullptr) {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

    Node* copyTree(Node* node) {
        if (node == nullptr) return nullptr;
        Node* newNode = new Node(node->data);
        newNode->left = copyTree(node->left);
        newNode->right = copyTree(node->right);
        return newNode;
    }

    void destroyTree(Node* node) {
        if (node != nullptr) {
            destroyTree(node->left);
            destroyTree(node->right);
            delete node;
        }
    }

public:
    // Constructor
    BST() {
        root = nullptr;
    }

    // Destructor
    ~BST() {
        destroyTree(root);
    }

    // Public methods
    void insert(int key) { root = insert(root, key); }

    bool search(int key) { return search(root, key); }

    void deleteNode(int key) { root = deleteNode(root, key); }

    int height() { return height(root); }

    int countNodes() { return countNodes(root); }

    int countLeaves() { return countLeaves(root); }

    void inorder() { inorder(root); cout << endl; }

    void preorder() { preorder(root); cout << endl; }

    void postorder() { postorder(root); cout << endl; }

    int findMin() {
        if (root == nullptr) throw runtime_error("Empty tree");
        return findMin(root)->data;
    }

    int findMax() {
        if (root == nullptr) throw runtime_error("Empty tree");
        Node* node = root;
        while (node->right != nullptr) node = node->right;
        return node->data;
    }

    BST* copy() {
        BST* newTree = new BST();
        newTree->root = copyTree(root);
        return newTree;
    }
};

int main() {
    BST tree;

    // Insert elements
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder: "; tree.inorder();
    cout << "Preorder: "; tree.preorder();
    cout << "Postorder: "; tree.postorder();

    cout << "Search 40: " << (tree.search(40) ? "Found" : "Not Found") << endl;

    tree.deleteNode(20);
    cout << "Inorder after deleting 20: "; tree.inorder();

    cout << "Height: " << tree.height() << endl;
    cout << "Nodes: " << tree.countNodes() << endl;
    cout << "Leaves: " << tree.countLeaves() << endl;

    cout << "Min: " << tree.findMin() << endl;
    cout << "Max: " << tree.findMax() << endl;

    // Copy tree
    BST* treeCopy = tree.copy();
    cout << "Copy (Inorder): "; treeCopy->inorder();

    delete treeCopy;

    return 0;
}
