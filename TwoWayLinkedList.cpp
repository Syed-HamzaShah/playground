#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

void insert(Node *&head, int value)
{
    Node *newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void printListForward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void printListBackwards(Node *head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
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

    cout << "Doubly linked list (forward): ";
    printListForward(head);

    cout << "Doubly linked list (backwards): ";
    printListBackwards(head);

    return 0;
}