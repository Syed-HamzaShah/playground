#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insert(Node *&head, int value)
{
    Node *newNode = new Node(value);

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
    }
}
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "The list is Empty..." << endl;
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != NULL);
    cout << head->data << endl;
}
int main()
{
    Node *head = NULL;
    int size, value;
    cout << "Enter the Size for the circular linked list: ";
    cin >> size;
    cout << "Enter the value for the circular liked list: ";
    for (int i = 0; i < size; i++)
    {
        cin >> value;
        insert(head, value);
    }

    cout << "circular linked list...";
    printList(head);
    return 0;
}