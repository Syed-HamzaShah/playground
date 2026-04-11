class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> pos;

        for(int i = 0; i < nums.size(); i++)
            pos[nums[i]].push_back(i);

        int ans = INT_MAX;

        for(auto [num, values]: pos){
            if(values.size() < 3) continue;

            for(int i = 0; i < values.size() - 2; i++){
                int dist = (values[i + 2] - values[i]) * 2;
                ans = min(ans, dist);
            }    
        }    
        
        return ans == INT_MAX? -1: ans;
    }
};