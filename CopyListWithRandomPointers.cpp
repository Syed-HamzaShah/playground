/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return head;

        unordered_map<Node *, Node *> m;

        Node *newHead = new Node(head->val);
        Node *oldTemp = head->next;
        Node *newTemp = newHead;

        m[head] = newHead;

        while (oldTemp != NULL)
        {
            Node *temp = new Node(oldTemp->val);
            newTemp->next = temp;

            m[oldTemp] = temp;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newHead;

        while (oldTemp != NULL)
        {
            newTemp->random = m[oldTemp->random];
            newTemp = newTemp->next;
            oldTemp = oldTemp->next;
        }

        return newHead;
    }
};