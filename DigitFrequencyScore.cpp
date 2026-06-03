class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;
        unordered_map<int,int> m;

        while(n > 0){
            int temp = n % 10;
            n /= 10;
            m[temp]++;
        }

        for(auto [first, second]: m)
            ans += first * second;

        return ans;    
    }
};