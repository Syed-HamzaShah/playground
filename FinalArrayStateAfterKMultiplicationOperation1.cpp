class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

        for (int i = 0; i < nums.size(); ++i)
            minHeap.emplace(nums[i], i);

        while(k > 0) {
            auto [val, idx] = minHeap.top();
            minHeap.pop();
            val *= multiplier;
            nums[idx] = val; 
            minHeap.emplace(val, idx);
            k--;
        }

        return nums;
    }
};