#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void inOrderDFS(Node *node)
{
    if (node == NULL)
        return;

    inOrderDFS(node->left);
    cout << node->data << " ";
    inOrderDFS(node->right);
}

void preOrderDFS(Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    preOrderDFS(node->left);
    preOrderDFS(node->right);
}

void postOrderDFS(Node *node)
{
    if (node == NULL)
        return;

    postOrderDFS(node->left);
    postOrderDFS(node->right);
    cout << node->data << " ";
}

Node *constructTree()
{
    int value;
    cout << "Enter the node value (-1 for NULL): ";
    cin >> value;

    if (value == -1)
        return NULL;

    Node *node = new Node(value);
    cout << "Enter left child of " << value << ":\n";
    node->left = constructTree();
    cout << "Enter right child of " << value << ":\n";
    node->right = constructTree();

    return node;
}

int main()
{
    cout << "Construct the binary tree:\n";
    Node *root = constructTree();

    cout << "In-Order DFS: ";
    inOrderDFS(root);

    cout << "\nPre-Order DFS: ";
    preOrderDFS(root);

    cout << "\nPost-Order DFS: ";
    postOrderDFS(root);

    return 0;
}