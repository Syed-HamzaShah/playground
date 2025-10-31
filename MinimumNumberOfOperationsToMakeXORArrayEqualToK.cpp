class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(auto &num: nums)
            sum ^= num;
        string sumBits = "";
        string kBits = "";
        int ans = 0;

        while(sum > 0){
            sumBits += to_string(sum % 2);
            sum /= 2;
        }

        while(k > 0){
            kBits += to_string(k % 2);
            k /= 2;
        }

        while (sumBits.size() < kBits.size()) sumBits += '0';
        while (kBits.size() < sumBits.size()) kBits += '0';

        for(int i = kBits.length()-1; i >= 0; i--)
            if(kBits[i] != sumBits[i]) 
                ans++;

        return ans;
    }
};