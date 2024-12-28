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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *first = dummy;
        ListNode *second = dummy;

        int delay = n;

        while (second->next != nullptr)
        {

            if (delay != 0)
            {
                second = second->next;
                delay--;
            }
            else
            {
                first = first->next;
                second = second->next;
            }
        }

        first->next = first->next->next;

        return dummy->next;
    }
};