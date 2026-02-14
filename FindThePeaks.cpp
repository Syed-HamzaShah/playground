class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        if(mountain.size() < 3) return {};
        vector<int> ans;
        
        for(int i = 2; i < mountain.size(); i++){
            if(mountain[i-1] > mountain[i] && mountain[i-1] > mountain[i-2])
                ans.push_back(i-1);
        }

        return ans;
    }
};