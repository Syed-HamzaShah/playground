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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *start = head;
        ListNode *end = head;

        while (end != nullptr)
        {
            int sum = 0;
            while (end != nullptr && end->val != 0)
            {
                sum += end->val;
                end = end->next;
            }
            start->val = sum;
            end = end->next;
            start->next = end;
            start = start->next;
        }
        return head->next;
    }
};