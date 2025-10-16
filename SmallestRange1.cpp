class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int smallest = INT_MAX;
        int largest = INT_MIN;

        for(auto &num: nums){
            smallest = min(smallest, num);
            largest = max(largest, num);
        }

        if(smallest + k < largest - k) return (largest - k) - (smallest + k);
        return 0;
    }
};