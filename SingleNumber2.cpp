class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s;
        long long sumSet = 0, sumNums = 0;
        
        for (auto& num : nums) {
            s.insert(num);
            sumNums += num;
        }
        
        for (auto& num : s)
            sumSet += num;
        
        return (int)((3 * sumSet - sumNums) / 2);
    }
};
