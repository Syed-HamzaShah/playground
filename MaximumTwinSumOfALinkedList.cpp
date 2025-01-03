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
    int pairSum(ListNode *head)
    {
        if (head->next->next == nullptr)
        {
            ListNode *e = head->next;
            return e->val + head->val;
        }

        int sum = INT_MIN;
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr;
        ListNode *curr = slow;

        while (curr != nullptr)
        {
            ListNode *ahead = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ahead;
        }

        curr = head;
        while (prev != nullptr)
        {
            int temp = prev->val + curr->val;
            sum = max(temp, sum);
            curr = curr->next;
            prev = prev->next;
        }

        return sum;
    }
};