class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.rbegin(), satisfaction.rend());
        
        int prefixSum = 0;
        int result = 0;

        for (int s : satisfaction) {
            prefixSum += s;
            if (prefixSum < 0) break;
            result += prefixSum;
        }

        return result;
    }
};
