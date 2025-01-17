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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *lista = list1;
        for (int i = 1; i < a; i++)
            lista = lista->next;

        ListNode *listb = lista;
        for (int i = a; i <= b + 1; i++)
            listb = listb->next;

        ListNode *temp = list2;
        while (temp->next != nullptr)
            temp = temp->next;

        lista->next = list2;
        temp->next = listb;

        return list1;
    }
};