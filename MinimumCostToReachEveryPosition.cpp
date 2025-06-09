class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans;
        int m = cost[0];
        ans.push_back(m);
        for(int i = 1; i < cost.size(); i++){
            if(cost[i] < m)
                m = cost[i];
            ans.push_back(m);
        }
        return ans;
    }
};