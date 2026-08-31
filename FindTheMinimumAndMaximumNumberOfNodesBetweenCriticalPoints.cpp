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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> tempStorage;
        vector<int> locals;

        ListNode* tempHead = head;

        while(tempHead){
            tempStorage.push_back(tempHead->val);
            tempHead = tempHead->next;
        }

        for(int i = 1; i < tempStorage.size() - 1; i++){
            if(tempStorage[i-1] > tempStorage[i] && tempStorage[i+1] > tempStorage[i])
                locals.push_back(i);
            if(tempStorage[i-1] < tempStorage[i] && tempStorage[i+1] < tempStorage[i])
                locals.push_back(i);
        }
        vector<int> ans{-1, -1};

        if(locals.size() > 1){
            ans[1] = locals[locals.size() -1] - locals[0];
            int tempValue = INT_MAX;
            for(int i = 1; i < locals.size(); i++){
                int tempValue2 = abs(locals[i-1] - locals[i]);
                tempValue = min(tempValue, tempValue2);
            }
            ans[0] = tempValue;
        }

        return ans;
    }
};