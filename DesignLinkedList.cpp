struct Node
{
    int val;
    Node *next;
    Node()
    {
        val = 0;
        next = nullptr;
    }
    Node(int info)
    {
        val = info;
        next = nullptr;
    }
};

class MyLinkedList
{
    Node *head;
    Node *tail;
    int size;

public:
    MyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int get(int index)
    {
        if (index < 0 || index >= size)
            return -1;
        Node *temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val)
    {
        if (head == nullptr)
        {
            Node *newNode = new Node(val);
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
        return;
    }

    void addAtTail(int val)
    {
        if (tail == nullptr)
        {
            Node *newNode = new Node(val);
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        Node *newNode = new Node(val);
        tail->next = newNode;
        tail = newNode;
        size++;
        return;
    }

    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > size)
            return;
        if (index == 0)
            addAtHead(val);
        else if (index == size)
            addAtTail(val);
        else
        {
            Node *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
            return;
        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            if (head == nullptr)
                tail = nullptr;
            delete temp;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            Node *toDelete = temp->next;
            temp->next = toDelete->next;
            if (toDelete == tail)
                tail = temp;
            delete toDelete;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */