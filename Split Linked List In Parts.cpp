class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size = 0;
        ListNode* temp = head;
        vector<ListNode*> ans(k, nullptr);

        while(temp) {
            size++;
            temp = temp->next;
        }

        int split = size / k;
        int remaining = size % k;

        temp = head;

        for(int i = 0; i < k; i++) {
            ans[i] = temp;

            int partSize = split;

            if(remaining > 0) {
                partSize++;
                remaining--;
            }

            ListNode* prev = nullptr;

            for(int j = 0; j < partSize; j++) {
                prev = temp;
                temp = temp->next;
            }

            if(prev) {
                prev->next = nullptr;
            }
        }

        return ans;
    }
};