#include <iostream>
#include <vector>
using namespace std;

class Node
{
    int data;
    Node *next;
};

class LinkedList
{
    Node *head = nullptr;

    LinkedList(int info = 0, Node *link = nullptr) {};
};

void deletionFromStart(Node *head)
{
    if (head->next == NULL)
    {
        cout << "Deletion Not possible" << endl;
        return;
    }

    Node *prev = head;
    Node *current;

    current = head->link;
    delete prev;
    head = current;
}

void deletionFromEnd(Node *head)
{
    if (head->link == NULL)
    {
        cout << "Deletion Not possible" << endl;
        return;
    }

    Node *prev = head;
    Node *current = prev->link;

    while (current->link != NULL)
    {
        prev = prev->link;
        current = current->link;
    }

    delete current;
    prev->link = NULL;
}

void deletionFromMiddle(int value, Node *head)
{
    Node *prev;
    Node *curr = head;
    Node *next;

    if (head->link == NULL)
    {
        cout << "Deletion Not possible" << endl;
        return;
    }

    while (curr->data != value)
    {
        if (curr->link == NULL)
            return;

        prev = curr;
        curr = curr->link;
    }
    next = curr->link;
    delete curr;
    prev = next;
}

int main()
{
    Node *head = NULL;
    int size, value;

    cout << "Enter the size of the linked list: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value : ";
        cin >> value;
        Node = new Node(value, head);
    }
}
return 0;
}