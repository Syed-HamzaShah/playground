class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int, int> mS;
        unordered_map<int, int> mT;
        int ans = 0;

        for(char c: s)
            mS[c]++;

        for(char c: t)
            mT[c]++;

        for(auto [first, second]: mS)
            if(second > mT[first])
                ans += abs(second - mT[first]);
            
        return ans;
    }
};