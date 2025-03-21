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
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == nullptr)
            return head;
        if (head->next == nullptr)
            return nullptr;
        ListNode *slow = head;
        ListNode *prev = nullptr;
        ListNode *ahead = nullptr;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ahead = slow->next;
        prev->next = ahead;
        delete slow;

        return head;
    }
};