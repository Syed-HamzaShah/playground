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
        ListNode *temp = head;
        ListNode *n1 = head;
        ListNode *n2 = head;

        for (int i = 1; i < k; i++)
        {
            n1 = n1->next;
        }
        temp = n1;
        while (temp != nullptr && temp->next != nullptr)
        {
            temp = temp->next;
            n2 = n2->next;
        }
        swap(n1->val, n2->val);

        return head;
    }
};