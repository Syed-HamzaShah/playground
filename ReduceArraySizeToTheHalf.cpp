class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> count;

        for (int x : arr)
            count[x]++;
        
        vector<int> frequencies;
        for (auto [first, second] : count) 
            frequencies.push_back(second);

        sort(frequencies.begin(), frequencies.end());
        
        int ans = 0;

        int removed = 0;
        int half = arr.size() / 2;

        int i = frequencies.size() - 1;

        while (removed < half) {
            ans += 1;
            removed += frequencies[i];
            i--;
        }

        return ans;
    }
};