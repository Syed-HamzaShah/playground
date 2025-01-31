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
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        if (head == nullptr)
            return head;

        ListNode *temp = head;
        int value1;

        while (temp != nullptr && temp->next != nullptr)
        {
            int value1 = temp->val;
            ListNode *prev = temp;
            temp = temp->next;
            int value2 = temp->val;
            int d = gcd(value1, value2);

            ListNode *curr = new ListNode(d);
            prev->next = curr;
            curr->next = temp;
        }

        return head;
    }
};