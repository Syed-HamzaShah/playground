class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> m;

        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3(nums3.begin(), nums3.end());

        for(auto& num: s1) m[num]++;
        for(auto& num: s2) m[num]++;
        for(auto& num: s3) m[num]++;

        vector<int> ans;

        for(auto& [first,second]: m)
            if(second > 1) ans.push_back(first);
            
        return ans;
    }
};