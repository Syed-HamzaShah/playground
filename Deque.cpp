#include <iostream>
using namespace std;

void initialize(int &front, int &rear)
{
    front = -1;
    rear = 0;
}

bool isFull(int front, int rear, int size)
{
    return ((front == 0 && rear == size - 1) || (front == rear + 1));
}

bool isEmpty(int front)
{
    return (front == -1);
}

void insertFront(int dequeue[], int &front, int &rear, int size, int key)
{
    if (isFull(front, rear, size))
    {
        cout << "Dequeue is full. Cannot insert at the front.\n";
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (front == 0)
    {
        front = size - 1;
    }
    else
    {
        front--;
    }
    dequeue[front] = key;
    cout << "Inserted " << key << " at the front.\n";
}

void insertRear(int dequeue[], int &front, int &rear, int size, int key)
{
    if (isFull(front, rear, size))
    {
        cout << "Dequeue is full. Cannot insert at the rear.\n";
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == size - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    dequeue[rear] = key;
    cout << "Inserted " << key << " at the rear.\n";
}

void deleteFront(int dequeue[], int &front, int &rear, int size)
{
    if (isEmpty(front))
    {
        cout << "Dequeue is empty. Cannot delete from the front.\n";
        return;
    }

    cout << "Deleted " << dequeue[front] << " from the front.\n";

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void deleteRear(int dequeue[], int &front, int &rear, int size)
{
    if (isEmpty(front))
    {
        cout << "Dequeue is empty. Cannot delete from the rear.\n";
        return;
    }

    cout << "Deleted " << dequeue[rear] << " from the rear.\n";

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        rear = size - 1;
    }
    else
    {
        rear--;
    }
}

void display(int dequeue[], int front, int rear, int size)
{
    if (isEmpty(front))
    {
        cout << "Dequeue is empty.\n";
        return;
    }

    cout << "Dequeue elements are: ";
    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
            cout << dequeue[i] << " ";
    }
    else
    {
        for (int i = front; i < size; i++)
            cout << dequeue[i] << " ";
        for (int i = 0; i <= rear; i++)
            cout << dequeue[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int size;

    cout << "Enter the size of the dequeue: ";
    cin >> size;

    int dequeue[size];
    int front, rear;

    initialize(front, rear);

    int choice, value;

    do
    {
        cout << "\nDequeue Operations Menu:\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at front: ";
            cin >> value;
            insertFront(dequeue, front, rear, size, value);
            break;
        case 2:
            cout << "Enter value to insert at rear: ";
            cin >> value;
            insertRear(dequeue, front, rear, size, value);
            break;
        case 3:
            deleteFront(dequeue, front, rear, size);
            break;
        case 4:
            deleteRear(dequeue, front, rear, size);
            break;
        case 5:
            display(dequeue, front, rear, size);
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
