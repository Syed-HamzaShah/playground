class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string ,int> mp;
        int n =responses.size();

        for(int i=0;i<n;i++){
            unordered_set <string> st(responses[i].begin(),responses[i].end());

            for(auto it: st)
                mp[it]++;
        }

        int maxi =0;
        string ans = "";

        for(auto it : mp){
            if(it.second > maxi || (it.second == maxi && it.first < ans)){
                maxi=it.second;
                ans=it.first;
            }
        }
        
        return ans;
        
    }
};