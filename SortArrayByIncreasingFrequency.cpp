class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> s;

        for(int &num: nums)
            s[num]++;

         vector<pair<int,int>> vec(s.begin(), s.end());

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            if (a.second == b.second) 
                return a.first > b.first;
            return a.second < b.second;
        });    

        int index = 0;
        for(auto &[num, freq]: vec)
            for(int i = 0; i < freq; i++)
                nums[index++] = num;
        
        return nums;
    }
};