/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *doubleIt(ListNode *head)
    {
        stack<ListNode *> s;

        ListNode *temp = head;

        while (temp)
        {
            s.push(temp);
            temp = temp->next;
        }

        int carry = 0;

        while (!s.empty())
        {
            ListNode *t = s.top();
            t->val *= 2;
            t->val += carry;
            carry = 0;
            if (t->val > 9)
            {
                int t2 = t->val % 10;
                carry = 1;
                t->val = t2;
            }
            s.pop();
        }

        if (carry == 1)
        {
            ListNode *newHead = new ListNode(1);
            newHead->next = head;
            head = newHead;
            return head;
        }
        return head;
    }
};