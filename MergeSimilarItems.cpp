class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> m;
        vector<vector<int>> ans;

        for(int i = 0; i < items1.size(); i++)
            m[items1[i][0]] = items1[i][1];
        
        for(int i = 0; i < items2.size(); i++)
            m[items2[i][0]] += items2[i][1];

        for(auto &[first, second]: m)
            ans.push_back({first,second});

       sort(ans.begin(),ans.end());     

        return ans;    
    }
};