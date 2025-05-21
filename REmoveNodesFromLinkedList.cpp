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
    ListNode *removeNodes(ListNode *head)
    {
        stack<ListNode *> s;
        ListNode *temp = head;

        while (temp)
        {
            s.push(temp);
            temp = temp->next;
        }
        ListNode *newHead = nullptr;
        int m = INT_MIN;

        while (!s.empty())
        {
            temp = s.top();
            s.pop();
            if (temp->val >= m)
            {
                temp->next = newHead;
                newHead = temp;
                m = temp->val;
            }
        }
        return newHead;
    }
};