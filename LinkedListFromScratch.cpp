#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int info)
    {
        data = info;
        next = NULL;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    };

    void insertFromStart(int info)
    {
        Node *newNode = new Node(info);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertFromBack(int info)
    {
        Node *newNode = new Node(info);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertInTheMiddle(int info, int position)
    {
        if (position == 0)
            insertFromStart(info);
        else if (position < 0)
            return;

        Node *newNode = new Node(info);
        Node *current = head;
        int currentPosition = 0;
        while (currentPosition < position - 1)
        {
            if (current == NULL)
            {
                cout << "Invalid Position!" << endl;
                return;
            }
            current = current->next;
            currentPosition++;
        }
        if (current == tail)
        {
            insertFromBack(info);
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void deletionFromStart()
    {
        if (head == NULL)
        {
            cout << "Deletion Not possible" << endl;
            return;
        }

        Node *prev = head;
        Node *current;

        current = head->next;
        delete prev;
        head = current;
    }

    void deletionFromEnd()
    {
        if (head == NULL)
        {
            cout << "Deletion Not possible" << endl;
            return;
        }

        Node *current = head;

        while (current->next != tail)
        {
            current = current->next;
        }
        current->next = NULL;
        delete tail;
        tail = current;
    }

    void deletionFromMiddle(int value)
    {
        if (head == NULL)
        {
            cout << "Deletion Not possible" << endl;
            return;
        }
        Node *curr = head;
        Node *prev = NULL;

        while (curr->data != value)
        {
            if (curr == tail)
            {
                cout << "Value Not Found!" << endl;
                return;
            }
            prev = curr;
            curr = curr->next;
        }

        if (curr == head)
        {
            deletionFromStart();
            return;
        }
        else if (curr == tail)
        {
            deletionFromEnd();
            return;
        }
        else
        {
            prev->next = curr->next;
        }
        delete curr;
        return;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return;
    }

    void search(int info)
    {
        Node *current = head;
        int i = 0;
        while (current != NULL)
        {
            if (current->data == info)
            {
                cout << "Value Found and is at Position " << i << endl;
                return;
            }
            else
            {
                current = current->next;
                i++;
            }
        }
        cout << "Value Not Found!" << endl;
    }
};

int main()
{

    LinkedList l;
    int choice, value, position;

    while (true)
    {
        cout << "\nChoose an operation: \n";
        cout << "1. Insert at the start\n";
        cout << "2. Insert at the end\n";
        cout << "3. Insert at a specific position\n";
        cout << "4. Delete from the start\n";
        cout << "5. Delete from the end\n";
        cout << "6. Delete a specific value\n";
        cout << "7. Print the list\n";
        cout << "8. Search for a value\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at the start: ";
            cin >> value;
            l.insertFromStart(value);
            break;

        case 2:
            cout << "Enter value to insert at the end: ";
            cin >> value;
            l.insertFromBack(value);
            break;

        case 3:
            cout << "Enter value to insert: ";
            cin >> value;
            cout << "Enter position to insert at (0-indexed): ";
            cin >> position;
            l.insertInTheMiddle(value, position);
            break;

        case 4:
            l.deletionFromStart();
            break;

        case 5:
            l.deletionFromEnd();
            break;

        case 6:
            cout << "Enter value to delete: ";
            cin >> value;
            l.deletionFromMiddle(value);
            break;

        case 7:
            cout << "Current list: ";
            l.printList();
            break;

        case 8:
            cout << "Enter value to search for: ";
            cin >> value;
            l.search(value);
            break;

        case 9:
            cout << "Exiting program. Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid choice! Please try again.\n";
            break;
        }
    }

    return 0;
}