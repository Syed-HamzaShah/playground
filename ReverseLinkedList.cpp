
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode *prevoius = head;
        ListNode *current = head->next;
        ListNode *upcoming = current;
        prevoius->next = nullptr;

        while (upcoming != nullptr)
        {
            upcoming = upcoming->next;
            current->next = prevoius;
            prevoius = current;
            current = upcoming;
        }

        head = prevoius;

        return head;
    }
};