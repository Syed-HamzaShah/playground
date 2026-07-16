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
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> Gset(nums.begin(), nums.end());

        ListNode* cur = head;
        int ans = 0;

        while (cur != nullptr) {
            if (Gset.count(cur->val) &&
                (cur->next == nullptr || !Gset.count(cur->next->val))) {
                ans++;
            }
            cur = cur->next;
        }

        return ans;
    }
};