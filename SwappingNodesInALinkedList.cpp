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
    ListNode *swapNodes(ListNode *head, int k)
    {
        stack<ListNode *> s;
        ListNode *temp = head;
        ListNode *n1 = nullptr;
        ListNode *n2 = nullptr;
        int n = 0;
        while (temp != nullptr)
        {
            n++;
            if (n == k)
                n1 = temp;

            s.push(temp);
            temp = temp->next;
        }
        n = 0;
        while (n != k - 1)
        {
            n++;
            s.pop();
        }
        n2 = s.top();
        swap(n1->val, n2->val);

        return head;
    }
};