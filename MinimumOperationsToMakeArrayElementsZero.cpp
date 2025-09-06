class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        vector<long long> pow4;
        pow4.push_back(1);
        while (pow4.back() <= 1e9)
            pow4.push_back(pow4.back() * 4);
        
        long long totalResult = 0;

        for (auto& q : queries) {
            long long l = q[0], r = q[1];
            long long steps = 0;

            for (int k = 0; k + 1 < (int)pow4.size(); k++) {
                long long start = max(l, pow4[k]);
                long long end   = min(r, pow4[k + 1] - 1);

                if (start <= end) {
                    long long count = end - start + 1;
                    steps += count * (k + 1);
                }
            }

            totalResult += (steps + 1) / 2;
        }

        return totalResult;   
    }
};