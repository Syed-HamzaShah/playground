class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(auto num: nums)
            freq[num]++;

        vector<vector<int>> ans;

        while(true){
            bool cancel = true;
            vector<int> temp;
            for(auto &[first,second]: freq){
                if(second == 0) continue;
                temp.push_back(first);
                freq[first]--;
                cancel = false;
            }
            if(cancel) break;
            ans.push_back(temp);
        }    

        return ans;
    }
};