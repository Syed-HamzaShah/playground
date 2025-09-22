class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(auto &num: nums)
            freq[num]++;
        
        int maxFreq = INT_MIN;
        int count = 0;

        for(auto &[first,second]: freq)
            if(second >= maxFreq) 
                maxFreq = second;

        for(auto &[first,second]: freq)
            if(second == maxFreq) count += second;

        return count;
    }
};