class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> s(friends.begin(), friends.end());
        vector<int> ans;

        for(auto &item: order)
            if(s.find(item) != s.end()) ans.push_back(item);

        return ans;
    }
};