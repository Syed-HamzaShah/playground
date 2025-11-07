class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> s;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;

        for(auto &num: nums){
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
            s.insert(num);
        }

        vector<int> ans;
        for(int i = minNum; i <= maxNum; i++){
            if(s.find(i) == s.end())
                ans.push_back(i);
        }
        
        return ans;
    }
};