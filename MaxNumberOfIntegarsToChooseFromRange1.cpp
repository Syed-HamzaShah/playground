class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> s;

        for(auto b: banned)
            if(b <= n) s.insert(b);

        int sum = 0;
        int ans = 0;

        for(int i = 1; i <= n; i++){
            if(s.find(i) == s.end() && maxSum >= sum +i) {
                sum += i;
                ans++;
            }     
            if(sum > maxSum) break;

        }
        return ans;
    }
};