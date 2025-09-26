class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int> mark(50, 0);

        for(auto &num: nums){
            if(mark[num-1] == 0) mark[num-1] = 1;
            else if(mark[num-1] == 1) mark[num-1] = -1;
        }

        int XOR = 0;
        
        for(int i = 0; i < 50; i++)
            if(mark[i] == -1) XOR ^= i+1;

        return XOR;
    }
};