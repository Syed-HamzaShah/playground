#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void deletionFromStart(Node *&head)
{
    if (head->next == NULL)
    {
        cout << "Deletion Not possible" << endl;
        return;
    }

    Node *prev = head;
    Node *current;

    current = head->next;
    delete prev;
    head = current;
    return;
}

void deletionFromEnd(Node *&head)
{
    if (head->next == NULL)
    {
        cout << "Deletion Not possible" << endl;
        return;
    }

    Node *prev = head;
    Node *current = prev->next;

    while (current->next != NULL)
    {
        prev = prev->next;
        current = current->next;
    }

    delete current;
    prev->next = NULL;
    return;
}

void deletionFromMiddle(int value, Node *&head)
{
    Node *prev;
    Node *curr = head;
    Node *next;

    if (head->next == NULL)
    {
        cout << "Deletion Not possible" << endl;
        return;
    }

    while (curr->data != value )
    {
        if (curr->next == NULL)
            return;

        prev = curr;
        curr = curr->next;
    }
    next = curr->next;
    delete curr;
    prev = next;
}

void insert(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        head = newNode;
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    int size, value;

    cout << "Enter the size of the linked list: ";
    cin >> size;

    cout << "Enter the values for the linked list:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> value;
        insert(head, value);
    }

    cout << "Linked List: ";
    printList(head);

    deletionFromStart(head);
    printList(head);
    deletionFromEnd(head);
    printList(head);

    return 0;
}